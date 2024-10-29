#include<bits/stdc++.h>
using namespace std;
bool check(int a){
	int res=a%100;
	return res==86;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a;cin >> a;
		cout << check(a)<<endl;
	}
	return 0;
}