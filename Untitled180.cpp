#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}
PhanSo tong(PhanSo &a,PhanSo &b){
	PhanSo tong1 ;
	long long m=a.mau/__gcd(a.mau,b.mau)*b.mau;
	long long a1=m/a.mau;
	long long b1=m/b.mau;
	tong1.tu=a.tu*a1+b.tu*b1;
	tong1.mau=m;
//	cout << tong1.tu <<"/"<<tong1.mau<<endl;
	long long n=__gcd(tong1.mau,tong1.tu);
	tong1.mau=tong1.mau/n;
	tong1.tu/=n;
	return tong1;
}
void in (PhanSo a){
	cout << a.tu<<"/"<<a.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}