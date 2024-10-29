#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		cin.ignore();
		string s;cin >> s;
		map<char,int> mp;
		int cnt=0;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		for(int i=0;i<mp.size();i++){
			int n=mp[i];
			cnt=cnt+(n*(n-1)/2);
		}
		cout << cnt+s.size()<<endl;
	}
}