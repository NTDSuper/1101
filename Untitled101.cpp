#include<iostream>
#include<math.h>
using namespace std;
bool nt(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return a>1;
}
int main (){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a >> b;
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(nt(i)) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}