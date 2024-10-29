#include<bits/stdc++.h>
using namespace std;
int check(int a,int b[],int c){
	sort(b,b+a);
	int l=0,r=a-1;
	while(r>=l){
		int m=(r+l)/2;
		if(b[m]>c){
			r=m-1;
		}
		else if(b[m]<c){
			l=m+1;
		}
		else return 1;
		
	}
	return -1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a >> b;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		cout << check(a,arr,b)<< endl;
	}
	return 0;
}