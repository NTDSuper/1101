#include<bits/stdc++.h>
using namespace std;
bool nt(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return a>1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int cnt=0;
		for(int i=1;i<a;i++){
				if(__gcd(i,a)==1) cnt++;
			
		}
		if(nt(cnt)) cout <<"1\n";
		else cout <<"0\n";
	}
	return 0;
}