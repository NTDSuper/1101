#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten,msv,lop,dob;
	double gpa;
};
void nhap(SinhVien &a){
	a.msv="B20DCCN001";
	getline(cin,a.ten);
	cin >>a.lop>>a.dob>>a.gpa;
	if(a.dob[1]=='/'){
		a.dob='0'+a.dob;
	}
	if(a.dob[4]=='/'){
		a.dob.insert(a.dob.begin() + 3, '0');
	}
}
void in(SinhVien a){
	cout <<a.msv<<" "<<a.ten<<" "<<a.lop<<" ";
	cout << a.dob <<" "<< fixed << setprecision(2) << (double)a.gpa<<" ";
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}