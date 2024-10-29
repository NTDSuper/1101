#include<bits/stdc++.h>
using namespace std;
long long lcm3(int a,int b,int c){
	long long lcm1=(long long)a/(__gcd(a,b))*b;
	return lcm1/(__gcd(lcm1,(long long)c))*c;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a,b,c,d;cin >> a>>b>>c>>d;
		int tmp=0;
		long long lcm=lcm3(a,b,c);
		long long l=pow(10,d-1),r=pow(10,d)-1;
		long long i=l/lcm;
		double sauphay=(double)l/lcm-i;
		if(sauphay!=0)i=i+1;
		for(i;i<=r/lcm;i++){
			cout << i*lcm<<endl;tmp=1;break;
			
		}
		if(tmp==0){
			cout << "-1\n";
		}
	}
	return 0;
}