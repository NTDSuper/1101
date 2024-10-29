#include<iostream>
#include<math.h>
using namespace std;
bool nt(long long a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return a>1;
}
int main(){
	int t;cin >> t;
	while(t--){
		long long a;cin >> a;
		int cnt=0;
		for(long long i=0;i<=sqrt(a);i++){
			if(nt(i)) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}