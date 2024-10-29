#include<bits/stdc++.h>
using namespace std;
int sphenic(int a){
	int res=0;
	for(int i=2;i<a;i++){
		int cnt=0;
		while(a%i==0){
			++cnt;
			a=a/i;
			
		}
	if(cnt>=2) return 0;
	if(cnt==1) res++;
	}
	if(a!=1) res++;
	return res==3;
	
}
int main(){
	int t; cin >> t;
	while(t--){
		int a;cin >> a;
		cout << sphenic(a) << endl;
	}
	return 0;
}