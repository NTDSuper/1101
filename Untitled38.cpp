#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int b;cin >>b;
		int arr[b];
		int max=0;
		for(int i=0;i<b;i++){
			cin >> arr[i];
			if(arr[i]>max) max=arr[i];
		}
		cout << max<<endl;
	}
}