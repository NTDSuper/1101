#include<bits/stdc++.h>
using namespace std;
void inso(long long a){
	for(int i=2;i<=a;i++){
		while(a%i==0){
			a=a/i;
			cout << i << " ";
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a;
		cin >> a;
		inso(a);
		cout << endl;
	}
	return 0;
}