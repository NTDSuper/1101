#include<bits/stdc++.h>
using namespace std;
void xoa(int b[],int cnt){
	for(int i=0;i<cnt-1;i++){
		if(b[i]==4 && b[i+1]==8 && b[i+2]==0){
			while(i<cnt-2){
				b[i]=b[i+3];
				i++;}
			cnt=cnt-3;}
		}
	while(cnt--){
		cout << b[cnt];
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		long long a;
		cin >> a;
		int cnt =0;
		int b=log10(a)+1;
		int k[b];
		while(a!=0){
			k[cnt]=a%10;
			a=a/10;
			cnt++;}
		xoa(k,cnt);
		cout << endl;
	}
	return 0;
}