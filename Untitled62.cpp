#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int input ;cin >> input;
		long long arr[input];
		int cnt=0;
		for(int i=0;i<input;i++){
			cin >> arr[i];
			if(arr[i]==0) cnt++;
		}
		int res=0;
		while(res<input-cnt){
			for(int i=0;i<input;i++){
				if(arr[i]!=0){
					arr[res++]=arr[i];
				}
			}	
		}
		while(cnt--){
			arr[res++]=0;
		}
		for(int i=0;i<input;i++){
			cout << arr[i] <<" ";
		}
		cout << endl;
	}
}