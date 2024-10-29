#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		string s;cin>>s;
		int ss=0,max=0;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
				ss=ss*10+s[i]-'0';	
			}
			else{
				if(max<ss){
					max=ss;
				}
				ss=0;
			}
		}
		if(max<ss){
			max=ss;
		}
		cout << max<<endl;
	}
	return 0;
}