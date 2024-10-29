#include<bits/stdc++.h>
using namespace std;
struct thuctap{
	string kyhieu,ten;
	int sl;	
};
void nhap(thuctap &cty){
	cin >> cty.kyhieu;
	cin.ignore();
	getline(cin,cty.ten);
	cin >> cty.sl;
}
void in(thuctap cty){
	cout << cty.kyhieu <<" "<<cty.ten<<" "<<cty.sl<<endl;
}
bool cmp(thuctap &a,thuctap &b){
	if(a.sl==b.sl){
		return a.kyhieu<b.kyhieu;
	}
	return a.sl>b.sl;
}
int main(){
	int n;cin >> n;
	
	thuctap cty[50];
	for(int i=0;i<n;i++){
		nhap(cty[i]);
	}
	sort(cty,cty+n,cmp);
	
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU "<< a <<" DEN "<<b<<" SINH VIEN:"<< endl;
	for(int i=0;i<n;i++){
		if(cty[i].sl>=a && cty[i].sl<=b)
		in(cty[i]);
	}
	}
	return 0;
}