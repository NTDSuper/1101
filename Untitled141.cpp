#include<bits/stdc++.h>
using namespace std;
long long fibo[10001];
long long mod=1e9+7;
void fibonacci(int a,long long fibo[]){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<a;i++){
		long long a=fibo[i-1]%mod;
		long long b=fibo[i-2]%mod;
		long long c=(a+b)%mod;
		fibo[i]=c;
	}
}
int main(){
	fibonacci(10001,fibo);
	int t;cin >> t;
	while(t--){
		int a;cin >>a;
		cout << fibo[a]<<endl;
	}
	return 0;
}