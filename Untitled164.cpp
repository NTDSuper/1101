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
	f.open("D:\\UNIVERSITY\\CPP\\DATA.in");
	
	long long tong = 0;
	while(!f.eof()){
		string s;
		f>>s;
		if(check(s)){
			tong += stoi(s);
		}
	}
	cout << tong;
	f.close();
	
	return 0;
}