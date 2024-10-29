#include<iostream>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,test;cin >> a >> test;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		while(test--){
			int l,r;cin >> l >> r;
			int sum=0;
			for(int i=l-1;i<r;i++){
				sum+=arr[i];
			}
			cout << sum << endl;
		}
		cout << endl;
	}
	return 0;
}