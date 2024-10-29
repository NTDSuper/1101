#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,int> mp;
	for(int i=0;i<10;i++){
		string a;
		cin >> a;
		mp[a]++; 
	}
	map<string,int> ::iterator  x;
	for(x=mp.begin();x != mp.end();x++){
		if(x->second>=2)
		cout << x->first << "/"<<x->second<<endl;
	}
}