#include<bits/stdc++.h>
using namespace std;
int check(long long a){
	long long gtri=0;
	long long a1=a;
	while(a!=0){
		int b=a%10;
		gtri=gtri*10+b;
		a=a/10;
	}
	if(a1==gtri) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a;
		cin >> a;
		if(check(a)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}