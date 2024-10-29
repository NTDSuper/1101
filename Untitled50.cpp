#include<bits/stdc++.h>
using namespace std;
void input(int a,int b[][100]){
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cin >> b[i][j];
		}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[100][100];
		input(a,arr);
		for(int i=0;i<a;i++){
			if(i%2==0){
				for(int j=0;j<a;j++){
					cout << arr[i][j] << " ";
				}
			}
			else{
				for(int j=a-1;j>=0;j--){
					cout << arr[i][j] << " ";
				}
			}
		}
		cout << endl;
	}
}