#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int cnt[3]={0};
		int a;cin >> a;
		int arr[100001];
		for(int i=0;i<a;i++){
			cin >> arr[i];
			cnt[arr[i]]++;
		}
		int res=0;
		while(res<3){
			while(cnt[res]!=0){
				cout << res << " ";
				cnt[res]--;
			}
			res++;
		}
		cout << endl;
	}
}