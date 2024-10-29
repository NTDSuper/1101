#include<bits/stdc++.h>
using namespace std;
void chuanhoans(string &a){
	if(a[1]=='/'){
		a='0'+a;
	}
	if(a[4]=='/'){
		a.insert(a.begin()+3,'0');
	}
}
void chuanhoaid(string &a,int b){
	a=to_string(b);
	while(a.size()<5){
		a='0'+a;
	}
}
class NhanVien{
	private:
		string mnv,ten,gt,ns,dc,mst,nhd;
	public:
		static int idnv;
		friend istream &operator >> (istream &is,NhanVien &a);
		friend ostream &operator << (ostream &os,NhanVien a);
		
};
istream &operator >> (istream &is,NhanVien &a){
	a.idnv++;
	chuanhoaid(a.mnv,a.idnv);
	scanf("\n");
	getline(is,a.ten);
	is >> a.gt >> a.ns;
	chuanhoans(a.ns);
	scanf("\n");
	getline(is,a.dc);
	is >> a.mst >> a.nhd;
	chuanhoans(a.nhd);
	return is;
}
ostream &operator <<(ostream &os,NhanVien a){
	os << a.mnv <<" "<< a.ten <<" "<< a.gt <<" "<< a.ns <<" "<< a.dc <<" "<< a.mst <<" "<< a.nhd <<endl;
	return os;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}