#include<bits/stdc++.h>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
int idKH=0;
int idMH=0;
int idHD=0;
void chuanhoaid(string &a,int id){
	string m=to_string(id);
	while(m.size()<3){
		m='0'+m;
	}
	a=a+m;
}
map <string,KhachHang> mapKH;
map <string,MatHang> mapMH;
class KhachHang{
	private:
	string mkh="KH",ten,gt,ns,dc;
	public:
		void nhap(fstream &f){
			getline(f,ten);
			getline(f,gt);
			getline(f,ns);
			getline(f,dc);
			idKH++;
			chuanhoaid(mkh,idKH);
			//chuan hoa ngay sinh
			if(ns[1]=='/'){
				ns='0'+ns;
			}
			if(ns[4]=='/'){
				ns.insert(ns.begin()+3,'0');
			}
		}
		friend class HoaDon;
		string getmkh(){
			return mkh;
		}
		void in(){
			cout <<mkh<<" "<<ten<<" "<<gt<<" "<<ns<<" "<<dc<<endl;
		}
};
class MatHang{
		private:
		string mmh="MH",ten,donvi;
		int mua,ban;
		public:
			friend class HoaDon;
			void nhap(fstream &f){
				getline(f,ten);
				getline(f,donvi);
				f >> mua >> ban;
				f.ignore();
				idMH++;
				chuanhoaid(mmh,idMH);
			}
			string getmmh(){
				return mmh;
			}
			void in(){
				cout << mmh <<" "<<ten<<" "<<donvi<<" "<<mua<<" "<<ban<<endl;
			}	
};
class HoaDon{
	private:
		string mhd="HD",mkh,mmh;
		long long sl;
		KhachHang MKH;
		MatHang MMH;
	public:
		void nhap(fstream &f){	
			f>>mkh >> mmh;
			f >> sl;
			idHD++;
			chuanhoaid(mhd,idHD);
			MKH=mapKH[mkh];
			MMH=mapMH[mmh];
		}
		void in(){
			cout << mhd <<" "<<MKH.ten<<" "<<MKH.dc<<" "<<MMH.ten<<" "<<MMH.donvi<<" "<<MMH.mua<<" "<<MMH.ban<<" "<<sl<<" "<<sl*MMH.ban<<endl;
		}	
};
int main(){
	KhachHang dskh[25];
	MatHang dsmh[46];
	HoaDon dshd[105];
	fstream f1,f2,f3;
	f1.open("KH.txt",ios::in);
	int KH;
	f1>>KH;
	f1.ignore();
	for(int i=0;i<KH;i++){
		dskh[i].nhap(f1);
		mapKH[dskh[i].getmkh()]=dskh[i];
//		dskh[i].in();
	}
	f1.close();
	f2.open("MH.txt",ios::in);
	int MH;f2>>MH;
	f2.ignore();
	for(int i=0;i<MH;i++){
		dsmh[i].nhap(f2);
		mapMH[dsmh[i].getmmh()]=dsmh[i];
//		dsmh[i].in();
	}
	f3.close();
	f3.open("HD.txt",ios::in);
	int HD;f3>>HD;
	for(int i=0;i<HD;i++){
		dshd[i].nhap(f3);
	}
	f3.close();
	for(int i=0;i<HD;i++){
		dshd[i].in();
	}
	return 0;
}