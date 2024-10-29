#include<bits/stdc++.h>
using namespace std;
int check(int a){
	while(a!=0){
		int b=a%10;
		if(b!=0 && b!=6 && b!=8)
		return 0;
		a=a/10;}
	return 1;
}       
int main(){
	int t;cin >> t;
	while(t--){
		int a;
		cin >> a;
		if(check(a)==1) cout << "YES\n";
		else cout << "NO\n";
	}
}