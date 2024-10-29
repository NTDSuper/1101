#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		long long arr1[a]={0};
		for(int i=0;i<a;i++){
			if(i==0){
				arr1[i]=arr[i]*arr[i+1];
			}
			else if(i==a-1){
				arr1[i]=arr[i]*arr[i-1];
			}
			else{
				arr1[i]=arr[i-1]*arr[i+1];
			}
		}
		for(int i=0;i<a;i++){
			cout << arr1[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}