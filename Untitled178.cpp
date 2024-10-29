#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;cin >> a;
	float arr[a];
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
	float max= 0;
	int arr1[1000];
	int cnt=0;
	for(int i=0;i<a;i++){
		if(arr[i]==max){
			arr1[cnt]=i;
			cnt++;
		}
		if(arr[i]>max){
			cnt=0;
			arr1[1000]={0};
			max=arr[i];
			arr1[cnt]=i;
			cnt++;
		}
	}
	if(cnt==0){
		cout << "error";
	}
	else
	for(int i=0;i<cnt;i++){
		cout << arr1[i]<<endl;
	}
	return 0;
}