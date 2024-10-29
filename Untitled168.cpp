#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ten,ns,msv="B20DCCN001",lp;
		double gpa;
		void getns();
	public :
		friend istream& operator>> (istream &is, SinhVien &a); 
		friend ostream& operator << (ostream &out ,const SinhVien &a);

};
void SinhVien::getns(){
	if(ns[1]=='/'){
		ns='0'+ns;
	}
	if(ns[4]=='/'){
		ns.insert(ns.begin()+3,'0');
	}
}
istream & operator >>(istream &is, SinhVien &a){
	getline(is, a.ten);
	is >> a.lp >> a.ns >> a.gpa;
	a.getns();
	return is;
}
ostream & operator <<(ostream &out ,const SinhVien &a){
	
	out << a.msv <<" "<<a.ten <<" "<<a.lp <<" "<<a.ns <<" "<<fixed << setprecision(2) <<a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout <<a;
    return 0;
}