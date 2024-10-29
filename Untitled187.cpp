#include<bits/stdc++.h>
using namespace std;
int m1=1;
struct NhanVien{
	string mnv,name="0",gt="0",ns="0",dc="0",mst="0",nhd="0";
};
void chuanhoa(string &a){
	if(a[1]=='/'){
		a='0'+a;
	}
	if(a[4]=='/'){
		a.insert(a.begin()+3,'0');
	}
}
void nhap(NhanVien& a){
	cin.ignore();
	getline(cin,a.name);
	getline(cin,a.gt);
	getline(cin,a.ns);
	getline(cin,a.dc);
	getline(cin,a.mst);
	getline(cin,a.nhd);
	
// chuan hoa mnv
	string m=to_string(m1);
	while(m.size()<5){
		m='0'+m;
	}	
	m1++;
	a.mnv=m;
	chuanhoa(a.ns);
	chuanhoa(a.nhd);
}
void inds(NhanVien a[],int N){
	for(int i=0;i<N;i++){
		cout << a[i].mnv <<" "<< a[i].name <<" "<< a[i].gt <<" "<< a[i].ns <<" "<< a[i].dc <<" "<< a[i].mst <<" "<< a[i].nhd << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
//    sapxep(ds, N);
    inds(ds, N);
    return 0;
}