#include<bits/stdc++.h>
using namespace std;
int stt=1;
class SinhVien{
	private:
		string ten,lp,ns;
		string msv="B20DCCN0";
		double gpa;
	public:
		void chuanhoa();
		friend istream & operator >> (istream &is,SinhVien &a);
		friend ostream & operator << (ostream &os,SinhVien &a);
		double getgpa(){
			return gpa;
		}
		
};
bool cmp(SinhVien a,SinhVien b){
			return a.getgpa()>b.getgpa();
}
void SinhVien::chuanhoa(){
	stringstream ss(ten);
	string s,tmp;
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++){
			tmp[i]=tolower(tmp[i]);
		}
		s=s+tmp+" ";
	}
	s.pop_back();
	ten=s;
}
istream & operator >> (istream &is,SinhVien &a){
	scanf("\n");
	getline(is,a.ten);
	is >> a.lp >> a.ns >> a.gpa;
// Chuan hoa ngay sinh	
	if(a.ns[1]=='/'){
		a.ns='0'+a.ns;
	}
	if(a.ns[4]=='/'){
		a.ns.insert(a.ns.begin()+3,'0');
	}
// Chuan hoa ma sinh vien
	string num=to_string(stt);
	while(num.size()<2){
		num='0'+num;
	}
	a.msv=a.msv+num;
	stt++;
// Chuan hoa ten
	a.chuanhoa();	
	return is;
}
ostream & operator << (ostream &os,SinhVien &a){
	os << a.msv << " " << a.ten << " " << a.lp << " " << a.ns << " ";
        os << fixed << setprecision(2) << a.gpa << "\n";
        return os;
}
void sapxep(SinhVien ds[],int N){
	sort(ds,ds+N,cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds,N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}