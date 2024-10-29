#include<iostream>
using namespace std;
int sum(int n){
	int cnt=0;
	while(n!=0){
		cnt+=n%10;
		n=n/10;
	}
	return cnt;
}
int check(int a){
	int sum1=sum(a);
	int sum2=0;
	int temp=a;
	for(int i=2;i<a;i++){
		while(a%i==0){
			sum2=sum2+sum(i);
			a=a/i;
		}
	}
	if(temp==a) return 0;
	if(a!=1){
		sum2+=sum(a);
	}
	return sum1==sum2;
}

int main(){
	int t;cin >> t;
	if(check(t)) cout << "YES\n";
	else cout << "NO\n";
}