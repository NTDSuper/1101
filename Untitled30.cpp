#include<bits/stdc++.h>
using namespace std;
int check(long long a){
	int check1=a%10;
	a=a/10;
	while(a!=0){
		int b=a%10;
		if(check1!=(b+1) && check1!=(b-1)) return 0;
		a=a/10;
		check1=b;
	}
	return 1;
}
int main(){
	int t;cin >> t;
	while(t--){
		long long a;
		cin >> a;
		if(check(a)==1) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}