#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	int cnt =0;
	int arr[a][3];
	for(int i=0;i<a;i++){
		int so1=0;
		int so0=0;
		for(int j=0;j<3;j++){
			cin >> arr[i][j];
			if(arr[i][j]==1) so1++;
			else if(arr[i][j]==0) so0++; 
		}
		if(so0<so1) cnt++;
	}
	cout << cnt;
}