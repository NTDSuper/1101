#include<bits/stdc++.h>
using namespace std;
int di[8]={-1,-1,-1,0,0,1,1,1};
int dj[8]={-1,0,1,-1,1,-1,0,1};
int main(){
	int a;cin >> a;
	int arr[a][a];
	int arr2[a][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cin >> arr[i][j];
			arr2[i][j]=arr[i][j];
		}
	}
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(arr[i][j]<0){
				arr2[i][j]=-5;
				for(int k=0;k<8;k++){
					if(arr2[i+di[k]][j+dj[k]]!=-5)
					arr2[i+di[k]][j+dj[k]]=-1;
				}
				
			}
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(arr2[i][j]==-5){
				cout << "("<<arr2[i][j]<<")"<<" ";
			}
			else
			cout << arr2[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}