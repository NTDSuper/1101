#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; cin >> t; 
	while(t--){ 
	int n; cin >> n; 
	set<int> mp; 
	map<int , int> mpp; 
	for(int i = 0 ; i < n ; i ++){ 
	int x; cin >> x; mpp[x]++; 
	} 
		
	for(auto it : mpp){ mp.insert(it.second); } 
		for(auto it = mp.rbegin() ; it != mp.rend() ; it++){ 
		for(auto ok : mpp){ 
		if(ok.second == *it){ 
		while(ok.second != 0){ 
		cout << ok.first << " "; ok.second --; } 
		} 
		} 
		} 
		cout << endl; 
	} 
}