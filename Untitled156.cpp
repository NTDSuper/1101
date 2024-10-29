#include<bits/stdc++.h>
using namespace std;
int cd1[100001]={0};
int cd2[100001]={0};
int arr[100001]={0};
void input(int n){
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
}
void cd(int n){
	cd1[0]=arr[0];
	for(int i=1;i<n;i++){
		int a=arr[i];
		int b=cd1[i-1];
		cd1[i]=a+b;
	}
	cd2[n-1]=arr[n-1];
	for(int j=n-2;j>=0;j--){
		int a=arr[j];
		int b=cd2[j+1];
		cd2[j]=a+b;
	}
}
int check(int n){
	for(int i=1;i<n-1;i++){
		if(cd1[i]==cd2[i]){
		return i+1;	
		
		}
	}
	return -1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		input(n);
		cd(n);
		cout << check(n)<<endl;
	}
	return 0;
}