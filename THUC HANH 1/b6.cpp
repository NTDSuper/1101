#include<bits/stdc++.h>
using namespace std;
long long fibo[10000];
void fibo1(long long fibo[]){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=10000;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
int main(){
	int t;cin >> t;
	fibo1(fibo);
	while(t--){
		int a;cin >> a;
		cout << fibo[a] << endl;
	}
	return 0;
}