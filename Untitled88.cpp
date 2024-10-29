#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		scanf("\n");
		string s,temp;
		getline(cin,s);
		stringstream ss(s);
		int cnt=0,odd=0,even=0;
		while(ss >> temp){
			cnt++;
			int c = stoi(temp);
			if(c%2==0) even++;
			else if(c%2==1) odd++;
		}
		if(cnt%2==0 && even > odd){
			cout << "YES\n";
		}
		else if(cnt%2==1 && odd >even){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
	return 0;
}