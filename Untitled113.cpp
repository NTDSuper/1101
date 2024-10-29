#include<bits/stdc++.h>
using namespace std;
void nhap(int a,int arr[]){
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
}
int slk(int a,int arr[]){
	sort(arr,arr+a);
	int cnt=0;
	int max=arr[a-1]-arr[0];
	for(int i=1;i<=max;i++){
		int flag=1;
		for(int j=1;j<a;j++){
			int ans=arr[j]-arr[0];
			if(ans%i!=0) {flag=2;break;
			}
		}
		if(flag!=2){
			cnt++;
		}
	}
	return cnt;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		nhap(a,arr);
		cout << slk(a,arr)<<endl;
	}
	return 0;
}