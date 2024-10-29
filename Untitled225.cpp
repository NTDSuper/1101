#include<bits/stdc++.h>
using namespace std;
class toado{
	private:
		int x,y;
	public:
		friend istream &operator >>(istream &is,toado &a){
			is >> a.x >> a.y;
			return is;
		}
		friend ostream &operator <<(ostream &os,toado a){
			os <<a.x <<" "<< a.y;
			return os;
		}
		friend toado operator +(toado a,toado b){
			toado tong;
			tong.x=a.x+b.x;
			tong.y=a.y+b.y;
			return tong;
		}	
};
int main(){
	toado a,b;
	cin >> a >> b;
	toado tong = a+b;
	cout << tong << endl;
}