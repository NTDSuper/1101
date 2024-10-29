#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	vector<int> v;
	while(t--){
		int a;cin >> a;
		int tong=0;
		if(a==1){
			tong =0;
		}
		else{
		tong=1;
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0){
				if(i!=a/i){
					tong=tong + i + a/i;
				}
				else{
					tong+=i;
				}
			}
		}
		}
		v.push_back(tong);
//	cout << tong << endl;
	}
	for(int i=0;i<v.size();i++){
	cout << v[i]<<endl;
	}
	return 0;
}