#include<bits/stdc++.h>
using namespace std;
void input(int a,int b[]){
	for(int i=0;i<a;i++){
		cin >> b[i];
	}
}
void sx(int a,int b[]){
	sort(b,b+a);
	int arr[a];
	int cnt1=0;
	int cnt2=0;
	for(int i=0;i<a;i++){
		if(i%2==1) 
		arr[i]=b[cnt1++];
		else {
		arr[i]=b[a-1-cnt2];
		cnt2++;
		}
	}
	for(int i=0;i<a;i++){
		cout << arr[i]<<" ";
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		input(a,arr);
		sx(a,arr);
		cout <<endl;
	}
}