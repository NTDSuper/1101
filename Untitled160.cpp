#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream f;
	f.open("D:\\UNIVERSITY\\CPP\\file.dat",ios::out);
	string s;
	int h;
	cin >> s >> h;
	f << "xin chao " << s << endl << h;
	f.close();
	f.open("D:\\UNIVERSITY\\CPP\\file.dat",ios::in);
	string data;
	getline(f,data);
	f >> h;
	cout << data << " "<< h ;
	f.close();
}