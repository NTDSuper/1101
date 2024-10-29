#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;cin >> a;
	int i=2;
	int res=0;
	while(i<a){
		int cnt=0;
		while(a%i==0){
			++cnt;
			a=a/i;
		}
		cout << i << endl;	
		if(cnt==1){
	 	res++;}
	 	i++;
	}
	if(res==3) cout << a;
	return 0;	
}
