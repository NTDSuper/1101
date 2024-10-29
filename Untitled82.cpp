#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		int min=9999;
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		for(int i=0;i<a-1;i++){
			for(int j=i+1;j<a;j++){
				int sum=(arr[i])+(arr[j]);
				if(abs(sum)<abs(min)){
					min=sum;
				}
			}
		}
		cout << min << endl;
	}
	return 0;
}