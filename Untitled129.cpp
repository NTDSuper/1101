#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a >> b;
		int arr[a][b]={0};
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin >> arr[i][j];
			}
		}
		int h1=0,hc=a-1,c1=0,cc=b-1;
		while(h1 < hc && c1<cc){
			int tmp=arr[h1+1][c1];
			int pre=0;
			for(int i=c1;i<=cc;i++){
				pre=arr[h1][i];
				arr[h1][i]=tmp;
				tmp=pre;
			}
			h1++;
			for(int i=h1;i<=hc;i++){
				pre=arr[i][cc];
				arr[i][cc]=tmp;
				tmp=pre;
			}
			cc--;
			if(h1<=hc){
				for(int i=cc;i>=c1;i--){
					pre=arr[hc][i];
					arr[hc][i]=tmp;
					tmp=pre;
				}
				hc--;
			}
			if(c1<=cc){
				for(int i=hc;i>=h1;i--){
					pre=arr[i][c1];
					arr[i][c1]=tmp;
					tmp=pre;
				}
				c1++;
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout << arr[i][j]<<" ";
			}
		}
		cout << endl;
	}
	return 0;
}