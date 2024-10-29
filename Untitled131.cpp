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
		sort(arr,arr+a);
		int arr2[a]={0};
		int l=0,r=a-1;
		for(int i=0;i<a;i++){
			if(i%2==1){
				arr2[i]=arr[l];l++;
			}
			else{
				arr2[i]=arr[r];r--;
			}
		}
		for(int i=0;i<a;i++){
			cout << arr2[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}