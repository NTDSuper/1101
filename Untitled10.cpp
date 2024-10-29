#include<bits/stdc++.h>
using namespace std;
double F(int a){
	double doF=(1.0*a*9/5)+32;
	return doF;
}
int main(){
	int a;
	cin >> a;
	cout <<  fixed << setprecision(2) << F(a);
}