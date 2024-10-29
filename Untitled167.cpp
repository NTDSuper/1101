#include<bits/stdc++.h>
using namespace std;
int nt(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return a>1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int arr[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> arr[i][j];
			}
		}
		int c,h;
		int max=0;
		for(int i=0;i<n;i++){
			int sl=0;
			for(int j=0;j<n;j++){
				if(nt(arr[i][j])!=0){
					sl++;
				}
			}
//			cout << sl << endl;
			if(sl>=max){
				max=sl;
				h=i;
			}
		}
		max=0;
		for(int i=0;i<n;i++){
			int tong1=0;
			for(int j=0;j<n;j++){
				if(nt(arr[j][i])!=0){
					tong1++;
				}
			}
//			cout << tong1 << endl;
			if(tong1>=max){
				max=tong1;
				c=i;
			}
		}
		cout << h <<" "<< c <<endl;
		for(int i=0;i<n;i++){
			int flag=0;
				for(int j=0;j<n;j++){
					if(i!=h && c!=j){
						flag=1;
						cout << arr[i][j]<<" ";
					}
				}
				if(flag==1)
				cout << endl;
		}
	}
}