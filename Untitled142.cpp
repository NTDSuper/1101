#include<bits/stdc++.h>
using namespace std;
struct thisinh{
	string ma,ten;
	double diem1,diem2,diem3,diemut;
	double tong;
};
void nhap(thisinh &a){
	cin >> a.ma;
	scanf("\n");
	getline(cin,a.ten);
	cin >> a.diem1 >> a.diem2 >> a.diem3;
	if(a.ma[2]=='1'){
		a.diemut=0.5;
	}
	if(a.ma[2]=='2'){
		a.diemut=1.0;
	}
	if(a.ma[2]=='3'){
		a.diemut=2.5;
	}
	a.tong=a.diem1*2+a.diem2+a.diem3+a.diemut;
}
void in(thisinh &a){
	cout << a.ma <<" "<<a.ten<<" ";
	cout << a.diemut <<" "<<a.tong-a.diemut<<" ";
	if(a.tong>=24){
		cout << "TRUNG TUYEN";
	}
	else{
		cout <<"TRUOT";
	}
}
int main(){
	thisinh a;
	nhap(a);
	in(a);
	return 0;
	
}