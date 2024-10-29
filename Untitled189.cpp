#include<bits/stdc++.h>
using namespace std;
struct nv{
	string ten,ns;
};
void nhap(nv &a){
	cin >> a.ten >> a.ns;
}
bool cmp(nv a,nv b){
	string d1=a.ns.substr(0,1),m1=a.ns.substr(3,4),y1=a.ns.substr(6,9);
	string d2=b.ns.substr(0,1),m2=b.ns.substr(3,4),y2=b.ns.substr(6,9);
	if(y1>y2) return true;
	if(y1==y2 && m1>m2) return true;
	if(y1==y2 && m1==m2 && d1>d2) return true;
	return false;
}
int main(){
	int t;cin >> t;
	nv cty1[t];
	for(int i=0;i<t;i++){
		nhap(cty1[i]);
	}
	sort(cty1,cty1+t,cmp);
	cout << cty1[0].ten<<endl<<cty1[t-1].ten << endl;
}