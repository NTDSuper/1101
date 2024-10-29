#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		int so;cin >> so;
		for(int i=0;i<a;i++){
			cin >> arr[i];
		} 
		for(int i=0;i<a-1;i++){
			for(int j=i+1;j<a;j++){
				if(arr[i]>arr[j]){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		cout << arr[so-1]<<endl;
	}
	return 0;
}