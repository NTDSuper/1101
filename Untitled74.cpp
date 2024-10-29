#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		cin.ignore();
		string s;
		getline(cin,s);
		vector<string> v;
		stringstream ss(s);
		string temp;
		while(ss >> temp){
			v.push_back(temp);
		}
		for(int i=v.size()-1;i>=0;i--){
			cout << v[i] <<" ";
		}
	}
}