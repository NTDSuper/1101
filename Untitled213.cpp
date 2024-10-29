#include<bits/stdc++.h>
using namespace std;
class nv{
	private:
		string ten;
		int hs,pc,lcb,tong;
	public:
		static int cnt;
		void nhap(){
			scanf("\n");
			getline(cin,ten);
			cin  >> lcb >> hs >> pc;
			tong=lcb*hs+pc;
			cnt++;
		}
		

		
};
int nv::cnt=0;
int main(){
	int N;cin >> N;
	nv cty1[N];
	for(int i=0;i<N;i++){
		cty1[i].nhap();
	}
	cout << cty1[N-1].cnt << endl;
}