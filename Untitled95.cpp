#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &A){
	cin >> A.tu >> A.mau;
}
long long gcd(long long a,long long b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		} 
	}
	return a=b;
}
void rutgon(PhanSo &A){
	while(gcd(A.tu,A.mau)!=1){
		long long a=gcd(A.tu,A.mau);
		A.mau/=a;
		A.tu/=a;
	}
}
void in(PhanSo &A){
	cout << A.tu<<"/"<<A.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}