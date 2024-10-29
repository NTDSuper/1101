#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a >> b;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		long long cnt=0;
		for(int i=0;i<a-1;i++){
			for(int j=i+1;j<a;j++){
				int hieu =abs(arr[i]-arr[j]);
				if(hieu < b){
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}