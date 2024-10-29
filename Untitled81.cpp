#include<bits/stdc++.h>
using namespace std;
int tim(int a,int arr[]){
	set<int> se;
	for(int i=0;i<a;i++){
		int x;
		x=arr[i];
		if(se.find(x) != se.end()){
		return x;
		}
		else se.insert(x);
	}
	return -1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		cout << tim(a,arr) << endl;
	}
	return 0;
}