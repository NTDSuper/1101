#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;cin >> a;
	for(int i=0;i<2*a;i=i+2){
		int cnt=1;
		for(int j=0;j<=i;j++){
			cout << cnt;
			cnt++;
		}
		cout <<endl;
	}
	
}