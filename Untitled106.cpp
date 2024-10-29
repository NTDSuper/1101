#include<bits/stdc++.h>
using namespace std;
int cnt[10000]={0};
int main(){
	string s,tmp;
	getline(cin,s);
	stringstream ss(s);
	int n=0;int arr[10000];
	while(ss >> tmp){
		arr[n]=stoi(tmp);
		cnt[arr[n]]++;
		n++;
	}
	for(int i=0;i<n;i++){
		if(cnt[arr[i]]!=0){
			cout << arr[i]<<" "<< cnt[arr[i]]<<endl;
			cnt[arr[i]]=0;
		}
	}
}