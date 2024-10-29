#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	vector<string> v;
	string temp;
	string res="";
	stringstream ss(s);
	while(ss >> temp){
		v.push_back(temp);
	}
	res=res+v[v.size()-1];
	for(int i=0;i<v.size()-1;i++){
		res=res+v[i][0];
	}
	cout << res << "@ptit.edu.vn";
	
}