#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		scanf("\n");
		string s;
		cin >> s;
		int sumle=0,sumchan=0;
		for(int i=0;i<s.size();i++){
			if(i%2==0){
				sumchan+=s[i]-'0';
			}
			else if(i%2==1){
				sumle+=s[i]-'0';
			}
		}
		if(abs(sumle-sumchan)%11==0){
			cout <<"1\n";
		}
		else{
			cout <<"0\n"; 
		}
	}
	return 0;
}