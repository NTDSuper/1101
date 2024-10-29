#include<bits/stdc++.h>
using namespace std;
int idKH=0;
int idMH=0;
int idHD=0;
class KhachHang;
class MatHang;
class HoaDon;
map <string,KhachHang> mapKH;
map <string,MatHang> mapMH;
void chuanhoaid(string &a,int id){
	string m=to_string(id);
	while(m.size()<3){
		m='0'+m;
	}
	a=a+m;
}
class KhachHang{
	private:
	string mkh="KH",ten,gt,ns,dc;
	public:
		friend istream &operator >>(istream &is,KhachHang &a){
//nhap ten khach hang
			scanf("\n");
			getline(is,a.ten);
//nhap gioi tinh + ngay sinh
			scanf("\n");
			getline(is,a.gt);
			scanf("\n");
			getline(is,a.ns);
//nhap dia chi 			
			scanf("\n");
			getline(is,a.dc);
//chuan hoa ngay sinh
			if(a.ns[1]=='/'){
				a.ns='0'+a.ns;
			}
			if(a.ns[4]=='/'){
				a.ns.insert(a.ns.begin()+3,'0');
			}
//chuan hoa id khach hang			
			idKH++;
			chuanhoaid(a.mkh,idKH);
//luu ma KH vao map
			mapKH[a.mkh]=a;
			return is;
	}
	friend class HoaDon;
	friend ostream &operator << (ostream &os,HoaDon a);
	friend istream &operator >> (istream &is,HoaDon &a);

};
class MatHang{
	private:
		string mmh="MH",ten,donvi;
		int mua,ban;
	public:
		friend istream &operator >>(istream &is,MatHang &a){
			idMH++;
			chuanhoaid(a.mmh,idMH);
			scanf("\n");
			getline(is,a.ten);
			is >> a.donvi;
			is >> a.mua >> a.ban;
			mapMH[a.mmh]=a;
			return is;
		}
		friend class HoaDon;
		friend ostream &operator << (ostream &os,HoaDon a);
		friend istream &operator >> (istream &is,HoaDon &a);

};
class HoaDon{
	private:
		string mhd="HD",mkh,mmh;
		int sl,loinhuan,thanhtien;
		KhachHang MKH;
		MatHang MMH;
	public:
		friend istream &operator >> (istream &is,HoaDon &a){
			idHD++;
			chuanhoaid(a.mhd,idHD);
			is >> a.mkh >> a.mmh ;
			is >> a.sl;
			a.MKH=mapKH[a.mkh];
			a.MMH=mapMH[a.mmh];
			a.thanhtien=a.sl*a.MMH.ban;
			a.loinhuan=a.sl*(a.MMH.ban-a.MMH.mua);
			return is;
		}
		friend ostream &operator << (ostream &os,HoaDon a){
			
			os << a.mhd << " "<< a.MKH.ten << " "<< a.MKH.dc << " "<<a.MMH.ten <<" "<<a.sl<<" "<<a.thanhtien<<" "<<a.loinhuan<<endl;
			return os;
		}
		int getLoiNhuan(){
			return loinhuan;
		}
		string getMMHten(){
			return MMH.ten;
		}
};
bool cmp(HoaDon a,HoaDon b){
	if(a.getLoiNhuan()==b.getLoiNhuan()){
		return a.getMMHten()>b.getMMHten();
	}
	return a.getLoiNhuan()>b.getLoiNhuan();
}
void sapxep(HoaDon dshd[],int N){
	sort(dshd,dshd+N,cmp);
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}