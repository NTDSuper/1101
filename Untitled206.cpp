#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct toado{
	double x,y;	
};
istream &operator >>(istream &is,toado &a){
	is >> a.x >> a.y;
	return is;
}
bool isOK(toado A, toado B, toado C){

    if ((A.x - B.x) * (A.y - C.y) == (A.x - C.x) * (A.y - B.y)) return 0;
    return 1;
}
double tinhS(toado A,toado B,toado C){
	double a=sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
	double b=sqrt(pow(A.x-C.x,2)+pow(A.y-C.y,2));
	double c=sqrt(pow(B.x-C.x,2)+pow(B.y-C.y,2));
	double S1=sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
	double R1=(a*b*c)/(S1);
	cout << R1<< " " << S1 << endl;
	double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    double R = a * b * c / (4 * S);
	double Stron=PI*R*R;
	double Stron1=PI *R1*R1;
	cout << R <<" "<< S <<endl;
	cout << Stron << endl<<Stron1;
	return Stron;
}
int main(){
	int t;cin >> t;
	while(t--){
		toado A,B,C;
		cin >> A >> B >> C;
		if(!isOK(A,B,C)){
			cout <<"INVALID"<<endl;
		}
		else
		cout << fixed << setprecision(3)<<tinhS(A,B,C)<<endl;
	}
}