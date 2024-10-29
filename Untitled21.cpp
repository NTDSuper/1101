#include<bits/stdc++.h>
using namespace std;
double kcach(double a,double b,double c,double d){
	double kc=sqrt(pow(a-c,2)+pow(b-d,2));
	return kc;
}
int main(){
	int t;cin >> t;
	while(t--){
	double a,b,c,d;
	cin >> a >> b >> c >> d;
	cout << fixed << setprecision(4) << kcach(a,b,c,d) << endl;
	}
	return 0;
}