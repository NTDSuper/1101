#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
void kieu1(string &s){
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		chuanhoa(tmp);
		v.push_back(tmp);
		
	}
	string kq=v[v.size()-1]+" ";
	for(int i=0;i<v.size()-1;i++){
		kq+=v[i]+" ";
	}
	cout << kq << endl;
}
void kieu2(string &s){
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		chuanhoa(tmp);
		v.push_back(tmp);
	}
	string kq="";
	for(int i=1;i<v.size();i++){
		kq+=v[i]+" ";
	}
	kq+=v[0]+" ";
	cout << kq << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		int kieu;string s;
		cin >> kieu;
		scanf("\n");
		getline(cin, s);
		if(kieu ==1){
			kieu1(s);
		}
		if(kieu ==2){
			kieu2(s);
		}
	}
	return 0;
}