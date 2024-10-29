#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream f;
	f.open("DATA1.in",ios::in);
	set<string> se,s1,s2,tong;
	string s;
	while(f >> s){
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		se.insert(s);
		s1.insert(s);
	}
	f.close();
	f.open("DATA2.in",ios::in);
	while(f>>s){
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		se.insert(s);
		s2.insert(s);
	}
	f.close();
	set<string> :: iterator it;
	for(it=s1.begin();it!=s1.end();it++){
		string m=*it;
		if(s2.find(m)!=s2.end()){
			tong.insert(m);
		}
	}
	for(it=se.begin();it!=se.end();it++){
		cout <<*it<<" ";
	}
	cout << endl;
	for(it=tong.begin();it!=tong.end();it++){
		cout <<*it <<" ";
	}
}