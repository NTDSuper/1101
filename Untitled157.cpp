#include<bits/stdc++.h>
using namespace std;
long long l,r;
long long a=sqrt(r);
long long b=sqrt(l);
long long n=sqrt(r)-sqrt(l)+1;
int arr[10000001]={1};
int max(long long a,long long b){
	if(a>b) return a;
	return b;
}
void sang(){
	for(int i=0;i<=n;i++){
		arr[i]=1;
	}
	for(int i=2;i<=sqrt(a);i++){
		for(int j=max(i*i,((b+i-1)/i)*i);j<=a;j=j+i){
			arr[j-b]=0;
		}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		cin >> l >> r;
		int cnt=0;
		for(int i=0;i<n;i++){
			if(arr[i]==1){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}