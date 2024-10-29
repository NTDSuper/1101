#include<bits/stdc++.h>
using namespace std;

int main(){
	fstream f;
	f.open("VANBAN.in",ios::in);
	set<string> se;
	string a;
	while(f>>a){
		for(int i=0;i<a.size();i++){
			a[i]=tolower(a[i]);
		}
		se.insert(a);
	}
	set<string> ::iterator s;
	for(s=se.begin();s!=se.end();s++){
		cout << *s <<endl;
	}
	f.close();

}