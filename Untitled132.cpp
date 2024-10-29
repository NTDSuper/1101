#include<bits/stdc++.h>
using namespace std;
void vtthg(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	string s,tmp,s1=" ";
	while(cin >> s){
	stringstream ss(s);
	while(ss >> tmp){
		vtthg(tmp);
		s1=s1+" "+tmp;
	}
	s1[0]=toupper(s1[0]);
	}
	cout << s1;
}