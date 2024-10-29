#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
	string s = a+b;
	string s1=b+a;
	return s>s1;
}
int main(){
	int t ;cin >> t;
	while(t--){
		int a;cin >> a;
		vector<string> v;
		for(int i=0;i<a;i++){
			string s;cin >> s;
			v.push_back(s);
		}
		sort(v.begin(),v.end(),cmp);
		for(auto i:v){
			cout << i;
		}
		cout << endl;
	}
}