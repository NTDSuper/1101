#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		int max=0;
			for(int i=0;i<a;i++){
		cin >> arr[i];
		if(arr[i]>max) {
			max=arr[i];
		}
	}
		int cnt=0;int k=1;
		while(k<max){
			int tmp=0;
			int du=arr[0]%k;
			for(int j=1;j<a;j++){
				if(arr[j]%k!=du){
					tmp=1;break;
				}
				else{
					du=arr[j]%k;
				}
			}
			if(tmp!=1){
				cnt++;	
			cout << k<<endl;
			}
			k++;
			
		}
		cout << cnt<< endl;
	}
	return 0;
}