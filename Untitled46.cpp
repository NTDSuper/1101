#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		while(b--){
			int s1,s2;cin >> s1 >> s2;
			int tong =0;
			for(int i=s1-1;i<s2;i++){
				tong+=arr[i];
			}
			cout << tong;
		}
		cout << endl;
	}
	return 0;
}