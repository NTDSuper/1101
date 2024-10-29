#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int c,h;cin >> h >> c;int tim;cin >> tim;
		int arr[h][c];
		for(int i=0;i<h;i++){
			for(int j=0;j<c;j++){
				cin >> arr[i][j];
			}
		}
		
		int kq[c*h]={0};
		int h1=0,hc=h-1,c1=0,cc=c-1;
		int cnt=0;
		while(h1<=hc && c1 <= cc){
			for(int i=c1;i<=cc;i++){
				kq[cnt]=arr[h1][i];
				cnt++;
			}
			h1++;
			
			for(int i=h1;i<=hc;i++){
				kq[cnt]=arr[i][cc];
				cnt++;
			}
			cc--;	
			
			if(c1<=cc){
				for(int i=cc;i>=c1;i--){
					kq[cnt]=arr[hc][i];
					cnt++;
				}
				hc--;
			}
			if(h1<=hc){
				for(int i=hc;i>=h1;i--){
					kq[cnt]=arr[i][c1];
					cnt++;
				}
				c1++;
			}
			
		}
		cout<<kq[tim-1];
		cout << endl;
		}
	}