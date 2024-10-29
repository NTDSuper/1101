#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		cin.ignore();
		string s;cin >> s;
		char trc = s[0];
		int cnt=1;
		for(int i=1;i<=s.size();i++){
			if(s[i]!=trc){
				cout << trc << cnt;
				trc=s[i];
				cnt=1;
			}
			else{
				cnt++;
			}
		}
		cout << endl;
	}
	return 0;
}