#include <bits/stdc++.h>
using namespace std;
void up_or_low(char a){
	if(a>='a' && a<='z'){
		a=toupper(a);
		cout<< a <<endl;
	}
	else if(a>='A'&& a<='Z'){
		a=tolower(a);
		cout<<a<<endl;
	}
}
int main(){
	int test;cin >> test;
	while(test --){
		char a;cin>>a;
		up_or_low(a);
	}
	return 0;
}