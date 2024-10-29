#include<bits/stdc++.h>
using namespace std;
int merge(int a,int arr[]){
	int cnt=0;
	int l=0,r=a-1;
	while(l<r){
		if(arr[l]==arr[r]){
			l++;
			r--;
		}
		else if(arr[l]>arr[r]){
			arr[r-1]+=arr[r];
			r--;
			cnt++;
		}
		else if(arr[l]<arr[r]){
			arr[l+1]+=arr[l];
			l++;
			cnt ++;
		}
	}
	return cnt;
}
void nhap(int a,int arr[]){
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		nhap(a,arr);
		cout << merge(a,arr)<<endl;
	}
	return 0;
}