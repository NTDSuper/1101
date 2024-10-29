#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string mvs,ten,lp;
	double m1,m2,m3;
};
void nhap(SinhVien &a){
	cin >> a.mvs;
	scanf("\n");
	getline(cin,a.ten);
	cin >> a.lp;
	cin >> a.m1 >> a.m2 >> a.m3;
}
void in_ds(SinhVien a[],int t){
	for(int i=0;i<t;i++){
		cout << i+1 <<" "<<a[i].mvs<<" "<<a[i].ten <<" "<<a[i].lp<< " ";
		cout << fixed <<setprecision(1)<<a[i].m1<< " "<<a[i].m2<< " "<<a[i].m3<<endl;
	}
}
bool cmp(SinhVien a,SinhVien b){
	string s1=a.mvs.substr(7,9);
	string s2=b.mvs.substr(7,9);
	return a.mvs<b.mvs;
}
void sap_xep(SinhVien a[],int t){
	sort(a,a+t,cmp);
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}