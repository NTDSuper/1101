#include<bits/stdc++.h>
using namespace std;
long long fibo[100];
int check1(int a){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<100;i++){
		fibo[i]=fibo[i-1] + fibo[i-2];
	}
	for(int i=0;i<100;i++){
		if(a==fibo[i]){
			return a;
		}
	}
	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a; cin >> a;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		for(int i=0;i<a;i++){
			if(check1(arr[i])>=0){
				cout << arr[i] <<" ";
			}
			
		}
		cout <<endl;
	}
}
