#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>> s;
		int n=s.size(),b[n],ok=1;
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		for(int i=0;i<n;i++){
			if(s[i]>='a'&&s[i]<='c') b[i]=2;
			else if(s[i]>='d'&&s[i]<='f') b[i]=3;
			else if(s[i]>='g'&&s[i]<='i') b[i]=4;
			else if(s[i]>='j'&&s[i]<='l') b[i]=5;
			else if(s[i]>='m'&&s[i]<='o') b[i]=6;
			else if(s[i]>='p'&&s[i]<='s') b[i]=7;
			else if(s[i]>='t'&&s[i]<='v') b[i]=8;
			else if(s[i]>='w'&&s[i]<='z') b[i]=9;
		}
		for(int i=0;i<=(n-1)/2;i++){
			if(b[i]!=b[n-i-1]){
				ok=0;
				break;
			}
		}
		if(ok==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}