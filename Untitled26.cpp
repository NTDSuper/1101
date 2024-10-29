#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin>> a;
		int b[a];
		int max=0;
		for(int i=0;i<a;i++){
			cin >> b[i];
			if(b[i]>max) max=b[i];
		}
		cout << max << endl;
	}
	return 0;
}