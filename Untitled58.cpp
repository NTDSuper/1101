#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		string s;
		cin.ignore();
		getline(cin,s);
		int k;cin >> k;
		set<char> s1;
		if(s.size()<26) cout << "0" << endl;
		for(int i=0;i<s.size();i++){
			s1.insert(s[i]);
		}
		if(k>=26-s1.size()) cout << "1" << endl;
		else cout << "0" << endl;
	}
}