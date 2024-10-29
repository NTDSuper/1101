#include<bits/stdc++.h>
using namespace std;
int check(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return a>1;
}
int main(){
	int a;cin >> a;
	if(check(a)) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}