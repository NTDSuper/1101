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
		int h1=0,hc=a-1,c1=0,cc=a-1;
		for(int i=0;i<a;i++){
			for(int j=0;j<a;j++){
				if(i==h1 || i==hc || j==c1 ||j==cc){
					cout << arr[i][j]<<" ";
				}
				else cout << "  ";
		}
		cout << endl;
		}
	}
}