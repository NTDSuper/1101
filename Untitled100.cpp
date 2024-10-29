#include<iostream>
#include<math.h>
using namespace std;
bool nt(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	if(a>1)
	return a;
}
int uoc(int a){
	for(int i=3;i<a;i++){
		if(a%i==0) return i;
	}
	return a;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		cout <<"1 ";
		for(int i=2;i<=a;i++){
			if(i%2==0) cout <<"2 ";
			else if(nt(i)) cout << i<<" ";
			else{
				cout << uoc(i)<<" ";
			}
		}
		cout << endl;
	}
	return 0;
}