#include<iostream>
using namespace std;
int gcd(int a,int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	return a;
}
long long lcm(int a,int b){
	return (long long)a*b/gcd(a,b);
}
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a >> b;
		cout << lcm(a,b)<<" "<<gcd(a,b)<<endl;
	}
	return 0;
}