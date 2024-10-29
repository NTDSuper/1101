#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,name,lp,dob;
	float gpa;
};
void nhap(SinhVien a[],int N){
	for(int i=0;i<N;i++){
		scanf("\n");
		getline(cin,a[i].name);
		cin >> a[i].lp >> a[i].dob >> a[i].gpa;
		string m=a[i].dob;
		if(m[1]=='/'){
			m='0'+m;
		}
		if(m[4]=='/'){
			m.insert(m.begin()+3,'0');
		}
		a[i].dob=m;

	}
}
void in(SinhVien a[],int N){
	for(int i=0;i<N;i++){
		a[i].msv="B20DCCN";
		if(i+1<10){
			cout << a[i].msv <<"00"<<i+1;
		}
		else{
			cout <<  a[i].msv <<"0"<<i+1;
		}
		cout <<" "<<a[i].name <<" "<<a[i].lp <<" "<<a[i].dob <<" "<<fixed<<setprecision(2)<<a[i].gpa <<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}