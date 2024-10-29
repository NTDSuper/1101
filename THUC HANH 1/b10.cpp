#include<bits/stdc++.h>
using namespace std;
bool check1(string s){
	for(int i=5;i<s.size()-1;i++){
		if(s[i]!=s[i+1]){
			if(s[i+1]==s[i+2]) return true;
			else return false;
		}
	}
	return true;
}
bool check2(string s){
	for(int i=5;i<s.size();i++){
		if(s[i]!=6+48 && s[i]!=8+48) 
		return false;
	}
	return true;
}
bool check3(string s){
	for(int i=5;i<s.size()-1;i++){
		if(s[i+1]-s[i]!=1){
			return false;
		}
	}
	return true;
}
// 
int main(){
	int t;cin >> t;
	while(t--){
		scanf("\n");
		string s;
		cin >> s;
		s.erase(s.begin() + 8);
		if(check3(s)==1||check1(s)==1 || check2(s)==1){
			
			cout <<"YES\n";
		}
		
		else {cout <<"NO\n";
		}
	}
	
}