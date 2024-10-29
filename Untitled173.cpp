#include<bits/stdc++.h>
using namespace std;
int id=1;
struct NhanVien{
	string mnv,ten,gt,ns,dchi,mst,nhd;
};
void nhap(NhanVien &a){
	scanf("\n");
	getline(cin,a.ten);
	cin >> a.gt>>a.ns;
	scanf("\n");
	getline(cin,a.dchi);
	cin >> a.mst >> a.nhd;
//Chuan hoa mnv
	string s=to_string(id);
	while(s.size()<5){
		s='0'+s;
	}	
	a.mnv=s;
	id++;
//Chuan hoa ngay sinh
	if(a.ns[1]=='/'){
		a.ns='0'+a.ns;
	}
	if(a.ns[4]=='/'){
		a.ns.insert(a.ns.begin()+3,'0');
	}
}
void inds(NhanVien a[],int N){
	for(int i=0;i<N;i++)
	cout << a[i].mnv <<" "<<a[i].ten <<" "<<a[i].gt <<" "<<a[i].ns <<" "<<a[i].dchi <<" "<<a[i].mst <<" "<<a[i].nhd << endl;
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}