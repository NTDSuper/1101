#include<bits/stdc++.h>
using namespace std;
void sang(int a,int b[],int c){
	for(int i=0;i<=c;i++){
		b[i]=1;
	}
	b[0]=0;b[1]=0;
	for(int i=2;i<=sqrt(c);i++){
		if(b[i]==1){
			for(int j=i*i;j<=c;j=j+i){
				b[j]=0;
			}
		}
	}
	for(int i=a;i<=c;i++){
		if(b[i]==1) cout << i <<" ";
	}
}
int main(){
		int t;cin >> t;
		while(t--){
		int a,c;
		cin >> a >> c;
		if(a>c){
			int temp=a;
			a=c;
			c=temp;
		}
		int b[c+1];
		sang(a,b,c);
		cout << endl;
		}
	return 0;
}