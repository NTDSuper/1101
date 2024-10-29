#include<bits/stdc++.h>
using namespace std;
int stt=1;
struct dsmh{
	string ten,nhom;
	double mua,ban;
	int num;
	friend istream &operator >> (istream &is,dsmh &a){
		scanf("\n");
		getline(is,a.ten);
		scanf("\n");
		getline(is,a.nhom);
		is >> a.mua >> a.ban;
		a.num=stt;stt++;
		return is;
	}
	friend ostream &operator << (ostream &os,dsmh &a){
		os <<a.num <<" "<<a.ten << " "<<a.nhom <<" "<<fixed << setprecision(2)<<a.ban-a.mua<<endl;
		return os; 
	}
};
bool cmp(dsmh &a,dsmh &b){
	return a.ban-a.mua > b.ban-b.mua;
}
int main(){
 	int t;cin >> t;
 	dsmh taphoa[t];
	for(int i=0;i<t;i++){
 		cin >> taphoa[i];
	}
	sort(taphoa,taphoa+t,cmp);
	for(int i=0;i<t;i++){
		cout << taphoa[i];
	}
	return 0;
}