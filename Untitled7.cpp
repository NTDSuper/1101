#include<bits/stdc++.h>
using namespace std;
long long square(long long a){
	long long b=sqrt(a);
	if(pow(b,2)==a) return a;
	else return 0;
}
int main(){
	long long a,b;
	cin >> a>>b;
	if(b<a){
		long long temp =a;
		a=b;
		b=temp;
	}
	long long sum=0;
	for(int i=a;i<=b;i++){
		if(square(i)) sum=sum+i;
	}
	cout << sum;
	return 0;
}