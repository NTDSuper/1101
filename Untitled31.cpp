#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void check (string a,int b){
	for(int i=0;i<b-3;i++){
		if(a[i]=='0' && a[i+1]=='8' && a[i+2]=='4'){
			while(i<b){
				a[i]=a[i+3];
			}
			b=b-3;
		}
	}
	for(int i=0;i<b;i++){
		cout << a[i];
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1;
		cin >> s1;
		check(s1,s1.length());
		cout << endl;
	}
	return 0;
}