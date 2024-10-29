#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		string s;
		scanf("\n");
		getline(cin,s);
		string xoa,tmp;
		scanf("\n");
		getline(cin,xoa);
		vector<string> v;
		set<string> se,kq;
		stringstream ss(s);
		while(ss>>tmp){
			v.push_back(tmp);
		}
		stringstream s1(xoa);
		while(s1 >> tmp){
			se.insert(tmp);
		}
		for(int i=0;i<v.size();i++){
			if(se.find(v[i]) == se.end()){
				kq.insert(v[i]);
			}
		}
		set<string> ::iterator m1;
		for(m1=kq.begin();m1!=kq.end();m1++){
			cout << *m1 << " ";
		}
		cout << endl;
	}
}