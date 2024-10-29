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
		string s1,s2,hieu1;
		cin >> s1 >> s2;
		if(s1.size()==s2.size() && s1<s2){
			string tmp=s1;
			s1=s2;
			s2=tmp;
		}
		if(s1.size()<s2.size()){
			string tmp=s1;
			s1=s2;
			s2=tmp;
		}
		swap(s1);
		swap(s2);
		for(int i=s2.size();i<s1.size();i++){
			s2=s2 + '0';
		}
		for(int i=0;i<s1.size();i++){
			int hieu=0;
			if(s1[i]<s2[i]){
				hieu=10+(s1[i]-'0')-(s2[i]-'0');
				s1[i+1]--;
			}
			else{
				hieu=(s1[i]-'0')-(s2[i]-'0');
			}
			char tmp=hieu+'0';
			hieu1+=tmp;
		}
		swap(hieu1);
		cout <<hieu1<<endl;
	}
}