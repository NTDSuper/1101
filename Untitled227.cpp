#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream f;
	int ma;
	string ten,cty;
	cin >> ma;
	getline(cin>>ws,ten);
	getline(cin,cty);
	f.open("onthi1.txt",ios::out);
	f << ma <<endl<<ten << endl << cty ;
	return 0;
}