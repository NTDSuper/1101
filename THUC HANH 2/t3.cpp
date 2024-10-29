#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		set<char> s;
		string s1;
		cin>>s1;
		int k; cin >>k;
		if(s1.length()<26){
			cout<<0;
		}
	 for(int i=0;i<s1.length();i++){
	 	s.insert(s1[i]);
	 }
	 if(26-s.size()<=k){
	 	cout<<1;
	 }
	 else cout<< 0;
	 cout<<endl;
}
}