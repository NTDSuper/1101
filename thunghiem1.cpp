#include<bits/stdc++.h>
using namespace std;
class hs{
	private:
		string mhs,ten;
		int m1,m2,m3;
	public:
		void nhap(fstream &f){
			
			getline(f,mhs);
			getline(f,ten);
			f >> m1 >> m2 >> m3;
			f.ignore();
			
		}
		friend ostream &operator <<(ostream &os,hs a){
			os << a.mhs <<" "<<a.ten<<" "<<a.m1<<" "<< a.m2 <<" "<<a.m3<<endl;
			return os;
		}
	 
};
int main(){
	hs xd[100];
	fstream f;
	f.open("thunghiem.txt",ios::in);
	int a;
	f >> a;
	f.ignore();
	for(int i=0;i<a;i++){
		xd[i].nhap(f);
	}
	f.close();
	for(int i=0;i<a;i++){
		cout << xd[i];
	}
}