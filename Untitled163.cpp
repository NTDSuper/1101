#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv="B20DCCN0",ten,lop,dob;
	double gpa;
};
void chuanhoaten(string &s){
	stringstream ss(s);
	string tmp;
	string cht;
	while(ss >> tmp){
		tmp[0]=toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++){
			tmp[i]=tolower(tmp[i]);
		}
		cht=cht+" "+tmp;
	}
	s=cht;
}
void chuanhoa(string &s){
	string tmp=s;
	if(tmp[1]=='/'){
		tmp="0"+tmp;
	}
	if(tmp[4]=='/'){
		tmp.insert(tmp.begin()+3,'0');
	}
	s=tmp;
}
void nhap(SinhVien ds[],int N){
	for(int i=0;i<N;i++){
		scanf("\n");
		getline(cin,ds[i].ten);
		cin >> ds[i].lop >> ds[i].dob >> ds[i].gpa;
		chuanhoa(ds[i].dob);
		chuanhoaten(ds[i].ten);
	}
	
}
void in(SinhVien ds[],int N){
	for(int i=0;i<N;i++){
		if(i+1<10){
			cout << ds[i].msv <<"0"<<i+1<< " ";
		}
		else{
			cout << ds[i].msv <<i+1<<" ";
		}
		cout << ds[i].ten <<" "<< ds[i].lop <<" "<< ds[i].dob << " " << fixed <<setprecision(2) << ds[i].gpa << endl; 
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