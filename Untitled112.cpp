#include<bits/stdc++.h>
using namespace std;
void nhap(int a,int arr[]){
	for(int i=0;i<a;i++)
	 cin >> arr[i];
}
int dis(int a,int arr[]){
	int max=0;
	for(int i=0;i<a-1;i++){
		for(int j=a-1;j>=i;j--){
			int ans=0;
			if(j-i<max) break;
			if(arr[i]<=arr[j]){
				ans=j-i;
			}
			if(ans > max) max=ans;
		}
	}
	return max;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		nhap(a,arr);
		cout << dis(a,arr)<<endl;
	}
	return 0;
}