#include<bits/stdc++.h>
using namespace std;
void swap(string &s){
	int l=0,r=s.size()-1;
	while(l<r){
		char tmp=s[l];
		s[l]=s[r];
		s[r]=tmp;
		l++;r--;
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		string s1,s2,tong1;
		cin >> s1 >> s2;
		swap(s1);
		swap(s2);
		if(s1.size()<s2.size()){
			string tmp=s1;
			s1=s2;
			s2=tmp;
		}
		for(int i=s2.size();i<s1.size();i++){
			s2=s2 + '0';
		}
		for(int i=0;i<s1.size();i++){
			int tong=s1[i]-'0'+s2[i]-'0';
			int flag=0;
			if(tong >=10){
				tong=tong%10;
				s1[i+1]++;
				flag=1;
				
			}
			char tmp= tong +'0';
			tong1+=tmp;
			if(i==s1.size()-1 && flag==1){
					tong1+='1';
				}
		}
		swap(tong1);
		cout << tong1 << endl;
	}
}