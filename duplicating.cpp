#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
	long long ucln;
	if(a==0 || b==0){
		ucln =a+b;
	}
	else{
		while(a!=b){	
			if(a>b) {
		a=a-b;
			}
			else {b=b-a;
			}
		}
	ucln = b;}
	return ucln;
}
/*long long so1(long long a,long long b){
	int scs=log10(a);
	long long so1=0;
	for(int i=0;i<b;i++){
		so1=so1*pow(10,scs+1)+a;
	}
	return so1;
} */
int main (){
	int t;cin>>t;
	while(t--){
	
	long long a,b,c;
	cin >> a >> b >>c;
	long long so[gcd(b,c)];
	for(int i=0;i<gcd(b,c);i++){
		so[i]=a;
	}
	for(int i=0;i<gcd(b,c);i++){
		cout << so[i];
	}
	cout << endl;
}
return 0;	
}