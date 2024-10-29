#include<bits/stdc++.h>
using namespace std;
struct t{
	int gio,phut,giay;
};
void nhap(t &a){
	cin >> a.gio >> a.phut >> a.giay;
}
bool cmp(t a,t b){
	if(a.gio < b.gio) return true;
	if(a.gio==b.gio && a.phut<b.phut) return true;
	if(a.gio==b.gio && a.phut==b.phut && a.giay<b.giay) return true;
	return false;
}
void in(t a){
	cout << a.gio <<" "<<a.phut <<" "<< a.giay<<endl;
}
int main(){
	int n;cin >> n;
	t gtri[n];
	for(int i=0;i<n;i++){
		nhap(gtri[i]);
	}
	sort(gtri,gtri+n,cmp);
	for(int i=0;i<n;i++){
		in(gtri[i]);
	}
}