#include<bits/stdc++.h>
using namespace std;
void chuanhoaid(string &mgv,int id){
	string s=to_string(id);
	while(s.size()<2){
		s='0'+s;
	}
	mgv=mgv+s;
}
void chuanhoabomon(string &bomon){
	stringstream ss(bomon);
	string tmp,s;
	while(ss >> tmp){
		char m1 = toupper(tmp[0]);
		s=s+m1;
	}
	bomon=s;
}
class gv{
	private :
		string mgv ="GV",ten,bomon;
	public :
		static int id;
		friend istream &operator >>(istream &is,gv &a);
		friend ostream &operator <<(ostream &os,gv a);
		string getbomon(){
			return bomon;
		}
};
int gv::id=0;
istream &operator >>(istream &is,gv &a){
	a.id++;
	chuanhoaid(a.mgv,a.id);
	scanf("\n");
	getline(is,a.ten);
	scanf("\n");
	getline(is,a.bomon);
	chuanhoabomon(a.bomon);
	return is;
}
ostream &operator <<(ostream &os,gv a){
	os << a.mgv <<" "<<a.ten <<" "<<a.bomon<<endl;
	return os;
}
int main(){
	int t;cin >> t;
	gv ptit[t];
	for(int i=0;i<t;i++){
		cin >> ptit[i];
	}
	int sl;cin >> sl;
	while(sl--){
		string find;
		scanf("\n");
		getline(cin,find);
		chuanhoabomon(find);
		cout <<"DANH SACH GIANG VIEN BO MON "<<find <<":"<<endl;
		for(int i=0;i<t;i++){
			if(find == ptit[i].getbomon()){
				cout << ptit[i];
			}
		}
		cout << endl;
	}
}