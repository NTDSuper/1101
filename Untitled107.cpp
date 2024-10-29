#include<iostream>
using namespace std;
void input(int a,int arr[]){
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
}
void tinh(int a,int arr[],int l,int r){
	int max=0;
	int cnt=0;
	int tmp=0;
	for(int i=l;i<=r;i++){
		if(arr[i]>max){
			max=arr[i];
			cnt=i;
		}
	}
	for(int i=l;i<cnt;i++){
		if(arr[i]>arr[i+1]){
			cout << "No"<<endl;tmp=1;break;
		}}
	if(tmp!=1){
	for(int i=cnt;i<r;i++)
		if(arr[i]<arr[i+1]){
			cout <<"No"<<endl;tmp=1;break;
		}}
	if(tmp!=1){
		cout << "Yes"<<endl;
	}
	
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		input(a,arr);
		int l,r;cin >>l>>r;
		tinh(a,arr,l,r);
	}
	return 0;
}