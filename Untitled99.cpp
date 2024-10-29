#include<iostream>
#include<math.h>
using namespace std;
bool nt(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return a>1;
}
int tang(int a){
	int tmp=a;
	int s1=a%10;
	a=a/10;
	while(a!=0){
		int b=a%10;
		if(s1<=b) return 0;
		a=a/10;
		s1=b;
	}
	return tmp;
}
int giam(int a){
	int tmp=a;
	int s1=a%10;
	a=a/10;
	while(a!=0){
		int b=a%10;
		if(s1>=b) return 0;
		a=a/10;
		s1=b;
	}
	return tmp;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int cnt=0;
		for(int i=pow(10,a-1);i<pow(10,a);i++){
			{if(nt(i) !=0 )
				if(tang(i) || giam(i))cnt++;
				
			}
		}
		cout << cnt << endl;
	}
	return 0;
}