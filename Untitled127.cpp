#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		int m=a/2;
		int sum1=0;
		int sum2=0;
		for(int i=0;i<m;i++){
			sum1+=arr[i];
		}
		for(int i=m;i<a;i++){
			sum2+=arr[i];
		}
		int m1=0;
		while(sum1 != sum2){
			if(m==m1){
				cout << "-1\n";break;
			}
			if(sum1>sum2 && m!=m1){
				m1=m;
				m=m-1;
				sum2+=arr[m];
			}
			else if(sum1<sum2 && m!=m1){
				m1=m;
				m=m+1;
				sum1+=arr[m];
			}
		}
		if(m!=m1)
		cout << m << endl;
	}
	return 0;
}