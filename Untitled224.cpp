#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		string s;cin >> s;
		string s1=s;
		string xoa;cin >> xoa;
		string them;cin >> them;
		while(s.find(xoa) != -1){
			int m=s.find(xoa);
			s.erase(m,xoa.size());
			s.insert(m,them);
		}
		cout << s<< endl;
	}
}