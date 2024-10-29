#include<bits/stdc++.h>
using namespace std;
void input(int a,int b[]){
	for(int i=0;i<a;i++){
		cin >> b[i];
	}
}
int tinh(int a,int b,int c[]){
	int cnt=0;
	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			int sum=c[i]+c[j];
			if(sum==b) cnt++;
		}
	}
	if (cnt ==0) return 0;
	return cnt;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int arr[a];
		input(a,arr);
		cout << tinh(a,b,arr)<<endl;
	}
	return 0;
}