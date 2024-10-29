#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;cin >> a;
	int arr[a];
	int cnt[a]={0};
	for(int i=0;i<a;i++){
		cin >> arr[i];
		if(arr[i]%2==1){
			cnt[i]=1;
		}
		else{
			cnt[i]=2;
		}
	}
	int tmp=a;
	for(int i=0;i<a;i++){
		if(cnt[i]==2){
			if(cnt[i-1]==2 ||cnt[i+1]==2){
				tmp=tmp-2;
				i=i+2;
			}
		}
		else if(cnt[i]==1){
			if(cnt[i-1]==1 || cnt[i+1]==1){
				tmp=tmp-2;
				i=i+2;
			}
		}
	}
	cout << tmp << endl;
	return 0;
}