#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		long a,b,c;
		cin >> a >> b >> c;
		long tong =1;
		int cnt=0;
		while(cnt < b){
			tong = tong*a%c;
			cnt++;
//			cout << tong << endl;
		}
		cout << tong << endl;
	}
	return 0;
}