#include<bits/stdc++.h>
using namespace std;
int date[3]={365,7,1};
void dem(int a){
	int cnt[3]={0};
	int i=0;
	while(a!=0){
		if(a>=date[i]){
			a=a-date[i];
			cnt[i]++;
		}
		else i++;
	}
	for(int i=0;i<3;i++){
		cout << cnt[i] << " ";
	}
}
int main(){
	int a;cin>>a;
	dem(a);
	return 0;
}