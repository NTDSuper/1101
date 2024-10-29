#include<bits/stdc++.h>
using namespace std;
void input(int a,int b,int arr[][100]){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin >> arr[i][j];
		}
	}
}
int main(){
	int a,b,c;cin >> a >> b >> c;
	int arr1[100][100];
	int arr2[100][100];
	input(a,b,arr1);
	input(b,c,arr2);
	int sum[100][100]={0};
	for(int i=0;i<a;i++){
		for(int j=0;j<c;j++){
			for(int k=0;k<b;k++){
				sum[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<c;j++){
			cout << sum[i][j]<<" ";
		}
		cout << endl;
	}
}