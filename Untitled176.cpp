#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream inf("PTIT.in");
	ofstream osf("PTIT.out");
	while(!inf.eof()){
		string s;
//		inf.ignore();
		getline(inf,s);
//		cout << s << endl;
		osf << s <<endl;
	}
	return 0;
}