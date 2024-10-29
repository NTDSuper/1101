#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		map <int,int> mp;
		int a,b;cin >> a >> b;
		for(int i=0;i<a;i++){
			int x;cin >> x;
			mp[x]++;
		}
		if(mp.find(b) != mp.end()) cout << mp[b]<<endl;
		else cout << "-1\n";
	}
	return 0;
}