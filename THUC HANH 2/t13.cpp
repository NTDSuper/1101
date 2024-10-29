#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int cnt=0;
		string s;
		cin >> s;
		int tong=0;
		while(cnt<s.size()){
			if(s[cnt]>='0'&&s[cnt]<='9'){
				tong=tong+s[cnt]-'0';
				s.erase(s.begin()+cnt);
			}
			else{
				cnt++;
			}
		}
		char tmp;
		for(int i=0;i<s.size()-1;i++){
			for(int j=i+1;j<s.size();j++){
				if(s[i]>s[j]){
					tmp=s[i];
					s[i]=s[j];
					s[j]=tmp;
				}
			}
		}
		cout << s <<tong<<endl;
	}
}