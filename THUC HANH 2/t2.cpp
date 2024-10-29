#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a][a];
		for(int i=0;i<a;i++){
			for(int j=0;j<a;j++){
				cin >> arr[i][j];
			}
		}
			for(int i=0;i<a;i++){
			if(i%2==1){
				for(int j=a-1;j>=0;j--){
					cout << arr[i][j]<<" ";
			}}
			else{
				for(int j=-0;j<a;j++){
					cout << arr[i][j]<<" ";
				}
			}
			}
			cout << endl;
		}
	return 0;
}