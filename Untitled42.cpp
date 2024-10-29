#include<bits/stdc++.h>
using namespace std;
int check(int a,int b[]){
	int cnt[1000001]={0};
	int max=0;
	for(int i=0;i<a;i++){
		cnt[b[i]]++;
		if(b[i]>max) max=b[i];
	}
	for(int i=1;i<=max+1;i++){
		if(cnt[i]==0) return i;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		int b[100001];
		cin >> a;
		for(int i=0;i<a;i++){
			cin >> b[i];
		}
		cout << check(a,b) << endl;
	}
	return 0;
}