#include<bits/stdc++.h>
using namespace std;
void sinh(int arr[],int n,int &ok){
	int i=n;
	while(i>=1 && arr[i]==1){
		arr[i]=0;
		i--;
	}
	if(i<1){
		ok=0;
	}
	else{
		arr[i]=1;
	}
}
bool check(int arr[],int n){
	int l=1,r=n;
	while(l<r){
		if(arr[l]!=arr[r]){
			return false;
		}
		l++,r--;
	}
	return true;
}
int main(){
	int n;cin >> n;
	int ok=1;
	int arr[100]={0};
	while(ok){
		if(check(arr,n)){
		for(int i=1;i<=n;i++){
			cout << arr[i];
		}
		cout << endl;
		}
		
		sinh(arr,n,ok);
	}
}