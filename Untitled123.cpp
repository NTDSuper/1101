#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a >>b;
		int k=a*b;
		int m=0;int arr1[a][b]={0};
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin >> arr1[i][j];
			}
		}
		int h1=0,hc=a-1;
		int c1=0,cc=b-1;
		while(h1<=hc && c1<=cc){
			for(int i=c1;i<=cc;i++){
				if(m<k){
				cout << arr1[h1][i]<<" ";m++;}
			}
			h1++;
			if(h1<hc){
			for(int i=h1;i<=hc;i++){
				if(m<k){cout <<arr1[i][cc]<<" ";m++;
				}
				
			}
			cc--;	}
			if(c1<cc){
			for(int i=cc;i>=c1;i--){
				if(m<k){cout << arr1[hc][i]<<" ";m++;
				}
				
			}
			hc--;	}
			if(h1<hc){
			for(int i=hc;i>=h1;i--){
				if(m<k){cout << arr1[i][c1]<<" ";m++;
				}
				
			}
			c1++;}
		}
		cout << endl;
		}
	return 0;
}