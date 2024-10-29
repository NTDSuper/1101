#include<bits/stdc++.h>
using namespace std;
long long sum1(int a){
	long long sum=0;
	
	for(int i=1;i<=a;i++){
		long long equal=1;
		for(int j=1;j<=i;j++){
			equal*=j;
		}
		sum+=equal;
	}
	return sum;
}
int main(){
	int a;cin >> a;
	cout << sum1(a);
}