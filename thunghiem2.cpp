#include<bits/stdc++.h>
using namespace std;
class hs{
	private:
		string mhs,ten;
		int m1,m2,m3;
	public:
	 	friend istream &operator >>(istream &is,hs &a){
	 		
			getline(is,a.mhs);
	 		getline(is,a.ten);
	 		is >> a.m1 >> a.m2 >> a.m3;
			is.ignore();
	 		return is;
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
		f >> xd[i];
	}
	f.close();
	for(int i=0;i<a;i++){
		cout << xd[i];
	}
}