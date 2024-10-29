#include<bits/stdc++.h>
using namespace std;
int longest(int a,int arr1[],int arr2[]){
	int max=0;
	for(int i=0;i<a;i++){
		int sum1=0,sum2=0,ans=i+1;
		for(int j=0;j<=i;j++){
			sum1+=arr1[j];
			sum2+=arr2[j];
		}
		int k=0;	
		while(ans>0){
		if(sum2!=sum1){
				sum1-=arr1[k];
				sum2-=arr2[k];
				k++;
				ans--;
			}
			else{
				break;
			}}
		if(ans>max) max=ans;
	}
	return max;
}
void nhap(int a,int arr1[],int arr2[]){
	for(int i=0;i<a;i++){
		cin >> arr1[i];
	}
	for(int i=0;i<a;i++){
		cin >> arr2[i];
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;int arr1[a],arr2[a];
		nhap(a,arr1,arr2);
		cout << longest(a,arr1,arr2)<<endl;
	}
	return 0;
}
