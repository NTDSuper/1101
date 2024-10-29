#include<bits/stdc++.h>
using namespace std;
int final(long long a){
	long long final1=0;
	while(a!=0){
		int b=a%10;
		final1+=b;
		a=a/10;
	}
	if(final1 <10) return final1;
	return final(final1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a;
		cin >> a;
		cout << final(a) << endl;
	}
}