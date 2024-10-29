#include<iostream>
#include<math.h>
using namespace std;
const long long mod=1e9 + 7;
void nhap(int a,int arr[]){
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
}
long long tinh(int a,long long b,int arr[]){
	long long sum=0,mu=1;
	for(int i=0;i<a;i++){
		mu=(pow(b,i));
		mu%=mod;
		sum=(sum+mu*arr[a-i-1])%mod;
	}
	return sum;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a >> b;
		int arr[a];
		nhap(a,arr);
		cout << tinh(a,b,arr)<<endl;
	}
	return 0;
}