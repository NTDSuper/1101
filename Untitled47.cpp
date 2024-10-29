#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a >> b;
		int arr[100][100];
		int cnt=0;
		int arr1[1000];
		int arr2[1000];
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin >> arr[i][j];
				if(arr[i][j]==1){
					arr1[cnt]=i;
					arr2[cnt]=j;
					cnt++;
				}
			}
		}
		int res=0;
		while(res<cnt){
			for(int i=0;i<a;i++){
				arr[i][arr2[cnt]]=1;
			}
			for(int i=0;i<b;i++){
				arr[arr1[cnt]][i]=1;
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout << arr[i][j]<<" ";
			}
			cout << endl;
		}
		}
	return 0;
}