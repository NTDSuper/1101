#include<bits/stdc++.h>
using namespace std;
int check(int a,int b){
	int cnt=0;
	for(int i=2;i<=a;i++){
		while(a%i==0){
			a=a/i;cnt++;
			if(cnt==b)
			return i;
		}
	}
	return -1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		cout << check(a,b)<< endl;
	}
	return 0;
}