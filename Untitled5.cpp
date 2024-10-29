#include<bits/stdc++.h>
using namespace std;
long long so(int a,int b,int c,int d){
	long long so1=pow(10,d-1);
		while(so1<pow(10,d)){
			if(so1%a==0 && so1%b==0){
				if(so1%c==0)
				return so1;
			}
			so1++;
		}
		return 0;
}
int main (){
	int test;
	cin >> test;
	while (test--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		cout << so(a,b,c,d)<<endl;
		}
	}
