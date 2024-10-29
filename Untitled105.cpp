#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
void nhap(int a,int arr[],int cnt[]){
	for(int i=0;i<a;i++){
		cin >> arr[i];
		cnt[arr[i]]=i;
	}
}
int tinh(int a,int arr[],int cnt[]){
	int max=0;
	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			int hieu=arr[i]-arr[j];
			if(hieu < 0 && abs(hieu)>max){
				max=abs(hieu);
			}
		}
	}
	if(max==0) return -1;
	return max;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin>>a;
		int arr[a];
		int cnt[100000];
		nhap(a,arr,cnt);
		cout << tinh(a,arr,cnt)<<endl;
	}
	return 0;
}