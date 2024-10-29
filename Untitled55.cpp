#include<bits/stdc++.h>
using namespace std;
int main(){
	int cnt[1001]={0};
	int cnt1=0;
	int a;cin >> a;
	cin.ignore();
	string s1[1001];
	for(int i=0;i<a;i++){
		scanf("\n");
		getline(cin,s1[i]);
	}
	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			if(s1[i].compare(s1[j])==0 && cnt[j]==0){
				cnt1++;cnt[j]=1;
			}
		}
	}
	cout << a-cnt1;
}