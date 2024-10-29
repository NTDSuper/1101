#include<bits/stdc++.h>
using namespace std;
int check(int a,long long b){
	long long sum=0;
	for(int i=1;i<=a;i++){
		long long c=i%b;
		sum+=c;
	}
	return sum==b;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;
		long long b;
		cin >> a >> b;
		cout << check(a,b) << endl;
	}
}