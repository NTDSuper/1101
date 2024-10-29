#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	DM:
	while(t--){	
		cin.ignore();
		string s;
		int cnt=0;
		cin >> s;
		for(int i=0;i<s.size();i++){
			int x=s[i]-48;
			if(x%2==1){cout << "NO\n";goto DM;
			}
		}
		int l=0,r=s.size()-1;
		while(r>=l){
			if(s[r]!=s[l]){
				cout << "NO\n";goto DM;
			}
			l++;r--; 
		}
		cout << "YES\n";
		
	}
	return 0;
}