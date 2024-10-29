#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		set<int> se;
		int a,kq;cin >> a >> kq;
		
		int tmp=-1;
		for(int i=0;i<a;i++){
			int b;cin >> b;
			se.insert(b);
		}
		set<int> :: iterator it;
		for(it=se.begin();it!=se.end();it++){
			if(se.count(kq+*it)==1){
				tmp=1;
			}
		}
		cout << tmp << endl;
	}
	return 0;
}