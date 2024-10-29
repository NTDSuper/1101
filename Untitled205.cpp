#include<bits/stdc++.h>
using namespace std;
int idSV=0;
struct SinhVien{
	int sttsv;
	string msv,name,lop,email,dn;
};
void nhap(SinhVien &a){
	scanf("\n");
	getline(cin,a.msv);
	scanf("\n");
	getline(cin,a.name);
	scanf("\n");
	getline(cin,a.lop);
	scanf("\n");
	getline(cin,a.email);
	scanf("\n");
	getline(cin,a.dn);
	a.sttsv=++idSV;
}
void in(SinhVien a){
	cout << a.sttsv <<" "<< a.msv <<" "<< a.name <<" "<< a.lop <<" "<< a.email <<" "<< a.dn<<endl;
}
bool cmp(SinhVien a,SinhVien b){
	return a.msv < b.msv;
}
int main(){
	int slsv;
	cin >> slsv;
	SinhVien thuctap[slsv];
	for(int i=0;i<slsv;i++){
		scanf("\n");
		nhap(thuctap[i]);	
	}
	sort(thuctap,thuctap+slsv,cmp);
	int t;cin >> t;
	while(t--){
		scanf("\n");
		string s;
		getline(cin,s);
		for(int i=0;i<slsv;i++){
			if(thuctap[i].dn==s){
				in(thuctap[i]);
			}
		} 
	}
	return 0;
}