#include<bits/stdc++.h>
using namespace std;
void input(int a,int b[]){
	for(int i=0;i<a;i++){
		cin >> b[i];
	}
}
void tron(int a[],int b[],int a2,int b2){
	vector<int> se;
	for(int i=0;i<a2;i++){
		se.push_back(a[i]);
	}
	for(int i=0;i<b2;i++){
		se.push_back(b[i]);
	}
	sort(se.begin(),se.end());
	for(int i=0;i<se.size();i++){
		cout << se[i] << " ";
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int a1[100001];
		int b1[100001];
		input(a,a1);
		input(b,b1);
		tron(a1,b1,a,b);
		cout << endl;
	}
}