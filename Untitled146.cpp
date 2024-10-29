#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size();
		int i=(n+1)/2;
		int j=n-i-1;
		while(i<n){
			cout << s[i]<<"/"<<s[j]<<endl;	
			if(s[i]==s[j]){
				i++;
				j--;
			}
			if(s[j]>s[i]){
				while(i<n){
					cout << j<<endl;
					s[i]=s[j];
					i++;
					j--;
				}
				break;
			}
			if(s[i]>s[j]){
				cout << j<<endl;
				s[j+1]=s[j+1]+1;
				while(i<n){
					s[i]=s[j];
					i++;
					j--;
				}
				break;
			}
		}
		cout << s << endl;
	}
	
	return 0;
}