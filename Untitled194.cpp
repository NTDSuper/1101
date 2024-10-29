#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream f;
	f.open("DATA.in",ios::in);
	int a,b;
	f>> a >> b;
	set<int> se,s1;
	for(int i=0;i<a;i++){
		int s;
		f>>s;
		se.insert(s);
	}
	for(int i=0;i<b;i++){
		int s;f>>s;
		if(se.find(s)!=se.end()){
			s1.insert(s);
		}
	}
	for(auto i:s1){
		cout << i << " ";
	}
}