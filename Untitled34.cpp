#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==0||b==0){
		return a+b;
	}
	while(a!=b){
	if(a>b){
		a=a-b;
	}
	else b=b-a;
	}
	return a;
}
long long lcm(long long i,long long k){
	return i/gcd(i,k)*k;
}
int main(){
	int t;cin>>t;
	while(t--){
		int a;int b;
		cin >> a >> b;
		cout << lcm(a,b) << " " << gcd(a,b) << endl;
	}
	return 0;
}