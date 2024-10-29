#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int cnt[100001]={0};
		int a;cin >> a;
		int arr[100001];
		int sum=0;
		for(int i=0;i<a;i++){
			cin >> arr[i];
			cnt[arr[i]]++;
		}
		for(int i=0;i<a;i++){
			if(cnt[arr[i]]>1){
				sum+=cnt[arr[i]];
				cnt[arr[i]]=0;
			}
		}
		cout << sum <<endl;
	}
}