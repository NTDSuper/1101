#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a>>b;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		sort(arr,arr+a,greater<int>());
		for(int i=0;i<b;i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}