#include <bits/stdc++.h>
using namespace std;
int idsv = 0;
void chuanhoaid(string a,int n){
    string s = to_string(n);
    while(s.size() < 3){
        s ='0' + s;
    }
    a = a + s;
}


class SinhVien{
    private:
        string msv;
        string ten;
        string lop;
        string ns;
        float gpa;
    public:
        SinhVien(string msv,string ten,string lop,string ns,float gpa){
        this->msv = msv;
        this->ten = ten;
        this->lop = lop;
        this->ns = ns;
        this->gpa = gpa;}
        SinhVien(){
		}
        
    friend istream &operator>>(istream &in,SinhVien &a){
        idsv++;
        a.msv = "B20DCCN";
        chuanhoaid(a.msv,idsv);
        getchar();
        getline(in,a.ten);
        getline(in,a.lop);
        getline(in,a.ns);
        in >> a.gpa;
        getchar();
        return in;
    }
    friend ostream &operator<<(ostream &out,SinhVien a){
        if(a.ns[1] == '/'){
            a.ns.insert(0,"0");
        }
        if(a.ns[4] == '/'){
            a.ns.insert(3,"0");
        }
        out << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) <<  a.gpa << endl;
        return out;
    }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}