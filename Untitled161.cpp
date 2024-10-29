#include<bits/stdc++.h>
using namespace std;
struct nv{
	string id,ten;
	int lcb,hs,pc,tong;
};
int main(){
	fstream f,fe;
	f.open("dsnv.txt",ios::out);
	int a;cin >> a;
	nv ss[a];
	for(int i=0;i<a;i++){
		cin >> ss[i].id;
		cin.ignore();
		getline(cin,ss[i].ten);
		cin >> ss[i].lcb >> ss[i].hs >> ss[i].pc;
		f << ss[i].id << endl << ss[i].ten << endl << ss[i].lcb << " " << ss[i].hs << " " << ss[i].pc << endl; 
	}
	f.close();
	fe.open("dsnv.txt",ios :: in);
	nv ds[a];
	f.open("bangluong.txt",ios::out);
	for(int i=0;i<a;i++){
		fe >> ds[i].id;
		fe.ignore();
		getline(fe,ds[i].ten);
		fe >> ds[i].lcb >> ds[i].hs >> ds[i].pc;
		ds[i].tong=ds[i].lcb*ds[i].hs+ds[i].pc;
		f << ds[i].ten<<endl;
		f << ds[i].tong<<endl;
	}	
	fe.close();
	f.close();
}