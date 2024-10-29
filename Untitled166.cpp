#include<bits/stdc++.h>
using namespace std;
int arr2[]={0};
void check(int arr[],int n){
	int gt=0;
	int dchi=0;
	for(int i=0;i<n-1;i++){
		gt=arr[i];
		int flag=0;
		for(int j=i+1;j<n;j++){
			if(gt <= arr[j]){
				arr2[i]=j;
				flag=1;
			}
		
		}
		if(flag==0){
			arr2[i]=-1;
		}
	}
	arr2[n-1]=-1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		check(arr,n);
		for(int i=0;i<n;i++){
			cout << arr2[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}