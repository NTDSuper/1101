#include<iostream>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		string s;cin >> s;
		int cnt=0;
		for(int i=0;i<s.size();i++){
			if(s[i]!=0+48 && s[i]!=6+48 && s[i]!=8+48){
				cout << "NO\n";cnt=1;break;
			}
		}
		if(cnt==0){
			cout <<"YES\n";
		}
		cout << endl;
	}
	return 0;
}