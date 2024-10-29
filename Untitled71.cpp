#include<bits/stdc++.h>
using namespace std;
void input(int a,int b[]){
	for(int i=0;i<a;i++){
		cin >> b[i];
	}
}
void gt(int a,int b[]){
	int res=0;
	int cnt=0;
	sort(b,b+a);
	while(res<a-1){
		if(b[res]!=b[res+1]){
		cnt++;
		cout << b[res] << " " << b[res+1];break;
		} 
		else res++;
	}
	if(cnt==0) {
		cout << "-1 ";
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		input(a,arr);
		gt(a,arr);
		cout << endl;
	}
	return 0;
}