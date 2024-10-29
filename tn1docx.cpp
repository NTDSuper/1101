#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	fstream f;
	f.open("tn1.txt",ios::out);
	f << s;
	f.close();
}