#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string ten,gt,ns,dc,mst,mnv="00001";
		string nhd;
	public:
		friend istream& operator >> (istream &is,NhanVien &a);
		friend ostream& operator << (ostream &os,NhanVien &a);
};
istream & operator >> (istream &is,NhanVien &a){
	getline(is,a.ten);
	is >> a.gt >> a.ns;
	scanf("\n");
	getline(is,a.dc);
	is >> a.mst >> a.nhd;
	if(a.ns[1]=='/'){
		a.ns='0'+a.ns;
	}
	if(a.ns[4]=='/'){
		a.ns.insert(a.ns.begin()+3,'0');
	}
	return is;
}
ostream & operator >> (ostream &os,NhanVien &a){
	os << a.mnv <<" "<<a.ten << " "<<a.gt <<" "<< a.ns <<" "<< a.dc <<" "<<a.mst <<" "<<a.nhd;  
	return os;
}
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}