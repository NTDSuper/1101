#include<bits/stdc++.h>
using namespace std;
void chuanhoaid(string &s,int idgv){
	string a=to_string(idgv);
	while(a.size()<2){
		a='0'+a;
	}
	s=s+a;
}
void chuanhoabomon(string &bomon){
	stringstream ss(bomon);
	string tmp;
	bomon="";
	while(ss >> tmp){
		bomon+=toupper(tmp[0]);
	}
}
class giaovien{
	private:
		string mgv="GV",ten,bomon;
	public:
		static int id;
		friend istream &operator >>(istream &is,giaovien &a);
		friend ostream &operator <<(ostream &os,giaovien a);
		string getten(){
			return ten;
		}
};
bool tim(string s,giaovien a){
	string ten=a.getten();
	for(int i=0;i<ten.size();i++){
		ten[i]=tolower(ten[i]);
	}
	if(ten.find(s)  == -1) return false;
	return true; 
}
int giaovien :: id = 0;
istream &operator >> (istream &is,giaovien &a){
	a.id++;
	chuanhoaid(a.mgv,a.id);
	scanf("\n");
	getline(is,a.ten);
	scanf("\n");
	getline(is,a.bomon);
	chuanhoabomon(a.bomon);
	return is;
}
ostream &operator << (ostream &os,giaovien a){
	os << a.mgv << " "<<a.ten <<" "<<a.bomon <<endl;
	return os;
}
int main(){
	int slgv;cin >> slgv;
	giaovien ptit[slgv];
	for(int i=0;i<slgv;i++){
		cin >> ptit[i];
	}
	int find;cin >> find;
	while(find--){
		string s;
		cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s <<":"<<endl;
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		for(int i=0;i<slgv;i++){
			if(tim(s,ptit[i])){
				cout << ptit[i];
			}
		}
		cout << endl;
	}
	return 0;
}