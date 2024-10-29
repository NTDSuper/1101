#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string ten,gioitinh,dob,dc,mst,hd,mnv;
};
void nhap(NhanVien &A){
	A.mnv="00001";
	getline(cin,A.ten);
	cin >> A.gioitinh >> A.dob;
	if(A.dob[1]=='/'){
		A.dob='0'+A.dob;
	}
	if(A.dob[4]=='/'){
		A.dob.insert(A.dob.begin()+3,'0');
	}
	scanf("\n");
	getline(cin,A.dc);
	cin >> A.mst >> A.hd;
	if(A.hd[1]=='/'){
		A.hd='0'+A.hd;
	}
	if(A.hd[4]=='/'){
		A.hd.insert(A.hd.begin()+3,'0');
	}
}
void in(NhanVien A){
	cout << A.mnv <<" "<<A.ten <<" "<< A.gioitinh<<" "<<A.dob<<" "<<A.dc<<" "<<A.mst<<" "<<A.hd;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}