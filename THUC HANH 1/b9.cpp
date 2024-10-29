#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	int cnt=0;
	double arr[a];
	double max=0;
	double min=11;
	double sum=0;
	for(int i=0;i<a;i++){
		cin >> arr[i];
		if(arr[i]>max) max=arr[i];
		if(arr[i]<min) min=arr[i];
	}
	for(int i=0;i<a;i++){
		if(arr[i]!=max && arr[i]!=min){
			sum+=arr[i];
			cnt++;
		}
	}
	cout << fixed<<setprecision(2)<<(sum)/cnt<<endl;
}