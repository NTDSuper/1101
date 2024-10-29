#include<bits/stdc++.h>
using namespace std;
double tinhtoan(double a,double b,char c){
	double kqua=0;
	if(c=='+'){
		kqua=a+b;
	}
	if(c=='-'){
		kqua=a-b;
	}
	if(c=='*'){
		kqua=a*b;
	}
	if(c=='/'){
		kqua=a/b;
	}
	return kqua;
}
int main(){
	double a,b;
	char c;
	cin >> a >> c >> b;
	cout << fixed << setprecision(2) << tinhtoan(a,b,c);
}