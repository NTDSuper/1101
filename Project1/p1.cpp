#include<iostream>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int nhap() {
	string s;
	getline(cin, s);
	fstream f;
	f.open("tnvs1.txt", ios::out);
	f << s;
	return 0;
}
int main1() {
	nhap();
	return 0;
}