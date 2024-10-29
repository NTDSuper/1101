#include<bits/stdc++.h>
using namespace std;
void lietke(int n){
	queue<string> a;
	string s1="";
	a.push(s1+'0');
	a.push(s1+'1');
	s1=a.front();
	while(s1.size()<n){
		int k=a.size();
//		cout << s1 << endl;
		a.pop();
		a.push(s1+'0');
		a.push(s1+'1');
		s1=a.front();
//		cout << s1 << endl;
	}
	int h1=a.size();
	for(int i=0;i<h1;i++){
		string s2=a.front();
		a.pop();
		cout <<s2 <<" ";	
	}
	cout << endl;

}
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		lietke(n);
	}
}