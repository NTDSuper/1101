#include<bits/stdc++.h> 
using namespace std ; 
map<string,int> mp ; 
void TestCase(){ 
	scanf("\n");
	string s ; 
	getline(cin,s) ; 
	for(int i = 0 ; i < s.length() ;i ++){ 
		s[i] =tolower(s[i]) ; 
	} 
	stringstream ss(s) ; 
	string tmp ; 
	string res="" ; 
	vector<string> v; 
	while(ss >> tmp){ 
		v.push_back(tmp); 
	} 
	res+= v[v.size()-1] ; 
	for(int i = 0 ;i < v.size()-1; i++){ 
	res+=v[i][0] ; 
	} 
	if(mp[res]==0){ 
	cout << res << "@ptit.edu.vn" << endl ;
	mp[res]++; 
	} 
	else 
	cout <<res << mp[res] <<"@ptit.edu.vn" << endl ; 
	mp[res]++ ; 
	} 
	int main(){ 
	int t ; cin >> t ; 
	while(t--){ 
	TestCase() ; 
	}
	return 0; 
	}