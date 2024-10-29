#include <bits/stdc++.h>
#include <fstream>
using namespace std;
bool check(string s){
	for(char c:s) if(!isdigit(c)) return false;
	if(atoll(s.c_str())>INT_MAX) return false;
	return true;
}

int main(){
	ifstream f;
	f.open("DATA.in");
	
	long long tong = 0;
	while(!f.eof()){
		string s;
		f>>s;
		if(check(s)){
			int a= atoi(s.c_str());
//			cout << a<<endl;
			tong += a;
		}
	}
	cout << tong;
	f.close();
	
	return 0;
}