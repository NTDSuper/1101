#include<bits/stdc++.h>
using namespace std;
bool shh(long long a){
	long long tong =1;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0)
		{
			tong = tong+i+a/i;
		}
	}
	return tong==a;
}
int main(){
	int t;cin >> t;
	while(t--){
		long long a;cin >> a;
		if(a>(long long) 1e12){
			cout <<"0\n";
		}
		if(shh(a)){
			cout << "1" <<endl;
		}
		else{
			cout <<"0\n";
		}
	}
	return 0;
}