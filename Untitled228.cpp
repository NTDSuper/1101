#include <bits/stdc++.h>
using namespace std;
int id = 0;
struct NhanVien{
	string ma = "000";
	string ten;
	string gt;
	string ns;
	string dc;
	string mst;
	string nkhd;
};
void chuanhoaid(string a,int n){
	string s = to_string(n);
	while(s.size() < 2){
		s = '0' + s;
	}
	a = a + s;
}
void input(NhanVien &a){
	id++;
	chuanhoaid(a.ma,id);
	getline(cin,a.ten);
	getline(cin,a.gt);
	getline(cin,a.ns);
	getline(cin,a.dc);
	getline(cin,a.mst);
	getline(cin,a.nkhd);
	scanf("\n");
}
void nhap(NhanVien ds[],int N){
	scanf("\n");
	for(int i = 0;i < N;i++){
		input(ds[i]);
	}
}
bool cmp(NhanVien a,NhanVien b){
	string d1 = a.ns.substr(0,2);
	string d2 = b.ns.substr(0,2);
	string m1 = a.ns.substr(3,2);
	string m2 = a.ns.substr(3,2);
	string y1 = a.ns.substr(6,4);
	string y2 = a.ns.substr(6,4);
	if(y1 == y2){
		if(m1 == m2){
			return d1 < d2;
		}
		return m1 < m2;
	}
	return y1 < y2;
}
void sapxep(NhanVien *ds,int n){
	sort(ds,ds+n,cmp);
}
void inds(NhanVien ds[],int N){
	for(int i = 0;i < N;i++){
		if(ds[i].ns[1] == '/'){
			ds[i].ns.insert(0,"0");
		}
		if(ds[i].ns[4] == '/'){
			ds[i].ns.insert(3,"0");
		}	
		cout << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].mst << " " << ds[i].nkhd << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    nhap(ds,N);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
