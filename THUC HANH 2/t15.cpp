#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size(),max=0,ss=0;
		for(int i=0;i<n;i++){
			if(s[i]<'0'||s[i]>'9'){
				if(max<ss) max=ss; 
				ss=0;
			}
			else ss=ss*10+s[i]-'0';
		}
		if(max<ss) max=ss;
		cout<<max<<endl;
	}
}