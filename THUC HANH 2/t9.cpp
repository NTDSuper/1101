#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		set<char> se;
		string s;cin >> s;
		int tmp=0;
		//while(s[0]=='0'){
		//	s.erase(s.begin());
		//}
		for(int i=0;i<s.size();i++){
			if(s[i]<'0' || s[i]>'9'||s[0]=='0'){
				cout <<"INVALID\n";tmp=1;break;
			}
			else{
				se.insert(s[i]);
			}
		}
		if(se.size()==10 && tmp==0){
			cout <<"YES\n";
		}
		else if(tmp==0 && se.size() !=10){
			cout << "NO\n";
		}
	}
	return 0;
}