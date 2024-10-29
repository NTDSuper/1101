#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a >> b;
		map<int,int>mp;
		int arr1[a],arr2[b];
		for(int i=0;i<a;i++){
		cin >> arr1[i];
		mp[arr1[i]]++;
	}
	for(int i=0;i<b;i++){
		cin >> arr2[i];
		mp[arr2[i]]++;
	}
		for(auto& m:mp){
			if(m.second>0){
				cout << m.first<<" ";
			}
		}
		cout << endl;
		for(auto& m:mp){
			if(m.second>1){
				cout << m.first<<" ";
			}
		}
		cout << endl;
	}
}