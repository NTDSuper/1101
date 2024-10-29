#include<iostream>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >>a;
		int arr[100001];
		int max1=arr[0];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		int max2=arr[0];
		for(int i=0;i<a;i++){
			max2=max2+arr[i];			
			if(max2>max1){
				max1=max2;
			}
			if(max2<0){
				max2=0;}	
		}
		cout << max1 <<endl;
	}
	return 0;
}