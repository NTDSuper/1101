#include<bits/stdc++.h>
using namespace std;
int nt(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return a>1;
}
long long sum(long long a){
	int sum1=0;
	long long gtri=a;
	while(a!=0){
		int b=a%10;
		sum1+=b;
		a=a/10;
	}
	if(nt(sum1)) return gtri;
	return -1; 
	
}
int main(){
	int t;cin >> t;
	while(t--){
		long long a;
		cin >> a;
		cout << sum(a) << endl;
	}
}