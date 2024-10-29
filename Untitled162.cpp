#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &a){
	for(int i=0;i<a.size();i++){
		a[i]=tolower(a[i]);
	}
}
int main(){
	string tmp;
	vector<string> v;
	while(cin >> tmp){
	v.push_back(tmp);
	}
	for(int i=0;i<v.size();i++){
		cout << v[i] << endl;
	}
}