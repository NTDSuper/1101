#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	fstream f;
	f.open("tnvs1.txt", ios::out);
	f << s;
	return 0;
}