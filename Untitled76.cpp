#include<bits/stdc++.h>
using namespace std;
int tim(int a,int b[],int c){
	for(int i=0;i<a;i++){
		if(b[i]==c) return i+1;
	}
	return -1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a>>b;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		cout << tim(a,arr,b)<<endl;
	}
}