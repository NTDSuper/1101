#include<bits/stdc++.h>
using namespace std;
void input(int a,int arr[]){
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
}
void check(int a,int b[]){
	bool cnt[1000001];
	for(int i=0;i<a;i++){
		cnt[b[i]]=1;
	}
	for(int i=0;i<a;i++){
		if(cnt[i]) cout << i << " ";
		else cout << "-1 ";
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		input(a,arr);
		check(a,arr);
		cout << endl;
	}
	return 0;
}