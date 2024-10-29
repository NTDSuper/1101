#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,b,cnt=0;
		cin >> a >> b;
		int arr[a-1];
		for(int i=0;i<a;i++){
			cin >> arr[i];
			if(arr[i]==b){
				cnt=i;
			}
		}
		cout << cnt+1 << endl;
	}
	return 0;
}