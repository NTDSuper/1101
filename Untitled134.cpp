#include<bits/stdc++.h>
using namespace std;
int count(const string s,int k){
	set<char> se;
	int cnt=0;
	int n=s.size();
	for(int i=0;i<n;i++){
		se.clear();
		for(int j=i;j<n;j++){
			se.insert(s[j]);
			if(se.size()==k){
				
				cnt++;
			}
			if(se.size()>k){
				break;
			}
		}
	}
	return cnt;
}
int main(){
	int t;cin >> t;
	while(t--){
		string s;int k;
		cin >> s >> k;
		cout << count(s,k)<<endl;
	}
}