#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int in;cin >> in;
		int arr[in]={0};
		for(int i=0;i<in-1;i++){
			cin >> arr[i];
		}
		int cnt=0;
		for(int i=0;i<in;i++){
			cnt++;
			if(cnt!=arr[i]) cout << cnt << endl;
		}
	}
	return 0;
}
