#include<bits/stdc++.h>
using namespace std;
int main(){
	int sl;cin >> sl;
	int k=sl*sl;
	int arr[k]={0};
	for(int i=0;i<k;i++){
		cin >> arr[i];
	}
	int m=0;
	int arr1[sl][sl]={0};
	sort(arr,arr+k);
	int h1=0,hc=sl-1,c1=0,cc=sl-1;
	while(h1<=hc && c1<=cc){
		for(int i=c1;i<=cc;i++){
			if(m<k){
				arr1[h1][i]=arr[m];m++;			}
		}
		h1++;
		if(h1<=hc){
			for(int i=h1;i<=hc;i++){
				arr1[i][cc]=arr[m];m++;
			}
		}
		cc--;
		if(c1<=cc){
			for(int i=cc;i>=c1;i--){
				if(m<k){
				arr1[hc][i]=arr[m];m++;
				}
			}
		}
		hc--;
		if(h1<=hc){
			for(int i=hc;i>=h1;i--){
				if(m<k)
				arr1[i][c1]=arr[m];m++;
			}
		}
		c1++;
	}
	
	for(int i=0;i<sl;i++){
		for(int j=0;j<sl;j++){
			cout << arr1[i][j]<<" ";
		}
		cout << endl;
	}
}