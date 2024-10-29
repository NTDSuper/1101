#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string hovaten,dob;
	double m1,m2,m3,sum;
};
void nhap(ThiSinh &A){
	scanf("\n");
	getline(cin,A.hovaten);
	cin >> A.dob >> A.m1 >> A.m2 >> A.m3;
}
void in(ThiSinh &A){
	A.sum=A.m1+A.m2+A.m3;
	cout << A.hovaten <<" "<< A.dob <<" "<<fixed<<setprecision(1) << A.sum;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}