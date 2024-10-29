#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;cin >> a;
	int arr[a]={0};
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
	int i=0;
	int tmp=a;
	while(i<a){
		int sum1=arr[i]+arr[i+1];
		int sum2=arr[i-1]+arr[i];
		if(sum1%2==0 && i<a-1){
		//	cout << arr[i] << " "<<arr[i+1]<<endl;
			tmp=tmp-2;
		//	cout << tmp << "/"<<endl;
			i=i+2;
		}
		else {
		if(sum2%2==0 && i>=1){
		//	cout << arr[i]<<endl;
			tmp=tmp-1;
		//	cout << tmp <<"/"<<endl;
			i++;
		}
		else{
			i++;
		}}
	}
	cout << tmp << endl;
	return 0;
}