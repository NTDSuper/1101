#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
void rutgon(PhanSo &a){
	long long k=__gcd(a.tu,a.mau);
	a.tu=a.tu/k;
	a.mau=a.mau/k;
}
void process(PhanSo &a,PhanSo &b){
	PhanSo c;
	PhanSo d;
	long long ctu=a.tu*b.mau+b.tu*a.mau;
	long long cmau=a.mau*b.mau;
	long long k=__gcd(ctu,cmau);
	ctu=ctu/k;
	cmau=cmau/k;
	c.tu=pow(ctu,2);
	c.mau=pow(cmau,2);
	rutgon(c);
	d.mau=a.mau*b.mau*c.mau;
	d.tu=a.tu*b.tu*c.tu;
	rutgon(d);
	cout <<c.tu<<"/"<<c.mau <<" "<<d.tu<<"/"<<d.mau<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}