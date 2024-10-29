#include<bits/stdc++.h>
using namespace std;
int menhgia[10]={1,2,5,10,20,50,100,200,500,1000};
void solan (int sotien){
	int cnt[10]={0};
	int i=9;
	while(sotien >0){
		if(sotien >= menhgia[i]){
			sotien=sotien-menhgia[i];
			cnt[i]++;
		}
		else{
			i--;
		}
	}
	for(int i=0;i<10;i++){
		if(cnt[i]!=0){
			cout << menhgia[i] << " "<< cnt[i] << endl;
		}
	}
}
int main(){
	int test;
	cin >> test;
	while(test--){
		int sotien;cin>>sotien;
		solan(sotien);
	}
	return 0;
}