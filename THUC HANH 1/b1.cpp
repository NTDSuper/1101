#include<iostream>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		for(int i=2;i<a;i++){
			int cnt=0;
			if(a%i==0){
			while(a%i==0){
				a=a/i;
				cnt++;
			}
			cout << i<<" "<<cnt<<" ";}
		}
		if(a!=1){
			cout <<a<<" 1";
		}
		cout << endl;
	}
	return 0;
}