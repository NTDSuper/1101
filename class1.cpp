#include<bits/stdc++.h>
using namespace std;
class nhanvien{
	private:
	string id,ten;
	double lcb,hs,pc,tong;
	public :
		void nhapfile(fstream &f);
		void docfile(fstream &f);
		void in();
		double getTong(){
			return this->tong;
		}
};
void nhanvien :: nhapfile(fstream &f){
	cin >> id;
	cin.ignore();
	getline(cin,ten);
	cin >> lcb >> hs >> pc;
	tong=lcb*hs+pc;
//	cout << id <<"/"<<ten<<"/"<< lcb <<"/"<< hs<<"/" << pc<<endl; 
	f << id <<endl;
	f << ten <<endl;
	f << lcb <<" "<< hs <<" "<< pc << endl;
}
void nhanvien :: docfile(fstream &f){
	getline(f,id);
	getline(f,ten);
	f >> lcb >> hs >> pc;
	f.ignore();
	
}
void nhanvien :: in(){
	
	cout << id << " "<<ten<<" "<<tong<<endl;
}
int main(){
	int t;cin >> t;
	nhanvien cty[t];
	fstream f;
	f.open("cty1.txt",ios::out);
	for(int i=0;i<t;i++){
		cty[i].nhapfile(f);
		
	}
	f.close();
	f.open("cty1.txt",ios:: in );
	for(int i=0;i<t;i++){
		cty[i].docfile(f);
		
	}
	f.close();
	nhanvien *max= &cty[0];
	nhanvien *min= &cty[0];
	for(int i=0;i<t;i++){
		if(cty[i].getTong() > max->getTong()){
			max= &cty[i];
		}
		if(cty[i].getTong() < min->getTong()){
			min= &cty[i];
		}
	}
	max->in();
	min->in();
	return 0;
}