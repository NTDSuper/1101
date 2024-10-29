#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;cin >> test;
	while(test--){
		int a;int b;
		cin >> a >> b;
		int cnt[100001]={0};
		int arr[10][1001];
		int max=0;
		for(int i=0;i<a;i++){
			for(int j=0;i<b;j++){
				cin >> arr[i][j];
				int x=arr[i][j];
				cnt[x]++;
				if(max<x) max=x;
			}
		}
		for(int k=0;k<max+1;k++){
			if(cnt[k]==0){
				cout << k << " ";
			}
		}
		cout << endl;
	}
}