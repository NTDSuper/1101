#include<iostream>
using namespace std;
long long fibo[1000]={0};
void tinh(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=1000;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
void nhap(int a,int arr[]){
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		nhap(a,arr);
		tinh();
		for(int i=0;i<a;i++){
			for(int j=0;j<1000;j++){
				if(arr[i]==fibo[j]) {cout << arr[i]<<" ";break;
				}
				else if(arr[i]<fibo[j]) break;
			}
		}
		cout << endl;
	}
	return 0;
}