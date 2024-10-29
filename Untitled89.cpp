#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		cin.ignore();
		string s;
		cin >> s;
		int temp=1,sum=0;
		for(int i=s.size()-1;i>=0;i--){
			sum+=(s[i]-'0')*temp;
			temp=temp*2;
			temp=temp%10;
			sum=sum%10;
		}
		if(sum%5==0){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}
	return 0;
}