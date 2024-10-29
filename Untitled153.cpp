#include<bits/stdc++.h>
using namespace std;
int di[8]={-1,-1,-1,0,0,1,1,1};
int dj[8]={-1,0,1,-1,1,-1,0,1};
int arr[100][100];
int a,b;
void loang(int i,int j){
	arr[i][j]=0;
	for(int k=0;k<8;k++){
		int x=i+di[k];
		int y=j+dj[k];
		if(x >= 0 && x < a && y >= 0 && y < b && arr[x][y] == 1){
			
			loang(x,y);
		}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		cin >> a>>b;
		int cnt=0;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin >> arr[i][j];
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(arr[i][j]==1){
					cnt++;
					//cout <<"("<< i << j <<")"<< endl;
					loang(i,j);
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}