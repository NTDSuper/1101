#include<bits/stdc++.h>
using namespace std;
class nhanvien{
	private:
		string id,name;
		float lcb,hs,pc,tong;
	public:
		void nhap(int t);
		void in(int t);
		bool cmp(nhanvien a,nhanvien b);
};
void nhanvien :: nhap(int t){
	fstream f;
	f.open("nv1.txt",ios::out);
	for(int i=0;i<t;i++){
	nhanvien a;
	cin >> a.id;
	scanf("\n");
	getline(cin,a.name);
	cin >> a.lcb>>a.hs>>a.pc;
	f << a.id<<endl<< a.name <<endl<<a.lcb<<" "<<a.hs<<" "<<a.pc<<endl;	
	}
	f.close();
}
bool nhanvien::cmp(nhanvien a,nhanvien b){
	if(a.tong>b.tong) return true;
	return false;}
void nhanvien :: in(int t){
	fstream f;
	f.open("nv1.txt",ios::in);
	nhanvien a[t];
	for(int i=0;i<t;i++){
		f >> a[i].id;
		f.ignore();
		getline(f,a[i].name);
		f>>a[i].lcb>>a[i].hs>>a[i].pc;
		a[i].tong=a[i].lcb*a[i].hs+a[i].pc;
	}
	f.close();
	nhanvien *max=&a[0];
	nhanvien *min=&a[0];
	for(int i=0;i<t;i++){
		if(a[i].tong>max->tong){
			max=&a[i];
		}
		if(a[i].tong<min->tong){
			min=&a[i];
		}
	}
	cout << min->id <<" "<< min->name<<" "<<min->lcb<<" "<<min->hs<<" "<<min->pc<<" "<<min->tong<<endl;
	cout << max->id <<" "<< max->name<<" "<<max->lcb<<" "<<max->hs<<" "<<max->pc<<" "<<max->tong<<endl;
}


int main(){
	int t;cin >> t;
	nhanvien cty;
	cty.nhap(t);
	cty.in(t);
}
