#include<bits/stdc++.h>
using namespace std;
int cnt[1001]={0};
int main(){
	int a;cin >> a;
	int arr[a];
	for(int i=0;i<a;i++){
		cin >> arr[i];
		cnt[arr[i]]++;
	}
	for(int i=0;i<1001;i++){
		if(cnt[i]!=0) cout << i<<" ";
	}
}