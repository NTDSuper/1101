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
	scanf("\n");
	getline(cin,a.name);
	scanf("\n");
	getline(cin,a.gt);
	scanf("\n");
	getline(cin,a.ns);
	scanf("\n");
	getline(cin,a.dc);
	scanf("\n");
	getline(cin,a.mst);
	scanf("\n");
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
bool cmp(NhanVien a,NhanVien b){
	
	string m1=a.ns.substr(0,1),d1=a.ns.substr(3,4),y1=a.ns.substr(6,10);

	string m2=b.ns.substr(0,1),d2=b.ns.substr(3,4),y2=b.ns.substr(6,10);
	
	if(y1<y2) return true;
	if(y1==y2 && m1<m2) return true;
	if(y1 == y2 && m1==m2 && d1<d2) return true;
	return false;
	
}
void sapxep(NhanVien *a,int N){
	sort(a,a+N,cmp);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}