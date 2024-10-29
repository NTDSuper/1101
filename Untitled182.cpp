#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu,mau;
	public:
		PhanSo(int tu,int mau){
			this->mau=mau;
			this->tu=tu;
		}
		void rutgon();
		friend istream & operator >>(istream &is,PhanSo &a);
		friend ostream & operator <<(ostream &os,PhanSo a);
		friend PhanSo operator +(PhanSo a,PhanSo b){
			PhanSo tong(1,1);
			long long m = a.mau/__gcd(a.mau,b.mau)*b.mau;
			long long a1=m/a.mau;
			long long b1=m/b.mau;
			tong.tu=a.tu*a1+b.tu*b1;
			tong.mau=m;
			long long k=__gcd(tong.mau,tong.tu);
			tong.mau=tong.mau/k;
			tong.tu=tong.tu/k;
		return 	tong;
		}
};
istream &operator >> (istream &is,PhanSo &a){
	is >> a.tu >> a.mau;
	return is;
}
ostream &operator << (ostream &os,PhanSo a){
	os << a.tu <<"/"<< a.mau;
	return os;
}
void PhanSo::rutgon(){
	long long a=__gcd(tu,mau);
	tu=tu/a;
	mau=mau/a;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}