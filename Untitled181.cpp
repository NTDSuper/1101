#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
	string msv="B20DCCN001",ten,lp,ns;
	double gpa;
	public:
		void chuanhoa();
		friend istream & operator >> (istream &in,SinhVien &a);
		friend ostream & operator << (ostream &os,SinhVien &a);
};
void SinhVien::chuanhoa(){
	string s,tmp;
	s=ten;
	stringstream ss(s);
	ten="";
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++){
			tmp[i]=tolower(tmp[i]);
		}
		ten=ten+tmp+" ";
	}
	
	ten.pop_back();
}
istream & operator >>(istream &in,SinhVien &a){
	scanf("\n");
	getline(in,a.ten);
	in >> a.lp >> a.ns >> a.gpa;
	if(a.ns[1]=='/'){
		a.ns='0'+a.ns;
	}
	if(a.ns[4]=='/'){
		a.ns.insert(a.ns.begin()+3,'0');
	}
	a.chuanhoa();
	return in;
}
ostream &operator <<(ostream &os,SinhVien &a){
	os <<a.msv<<" "<<a.ten << " "<<a.lp <<" "<<a.ns << " "<<fixed << setprecision(2)<<a.gpa<<endl;
	return os;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}