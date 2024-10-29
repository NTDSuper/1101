#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,k;cin >> a >> k;
		int arr[a*a];
		for(int i=0;i<a*a;i++){
			cin >> arr[i];
		}
		sort(arr,arr+a*a);
		cout << arr[k-1]<<endl;
	}
	return 0;
}