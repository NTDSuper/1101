#include<bits/stdc++.h>
using namespace std;
long long re1(long long re){
	long long a=0;
	while(re!=0){
		int b=re%10;
		a=a*10+b;
		re=re/10;
	}
	return a;
}
int main (){
	long long a;
	cin >> a;
	cout << re1(a);
	return 0;
}