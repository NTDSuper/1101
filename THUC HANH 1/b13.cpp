#include<iostream>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		if(a>=730) cout << "10\n";
		else if(a<730 && a>=600) cout << "9\n";
		else if(a<600 && a>=525) cout << "8\n";
		else if(a<525 && a>=450) cout <<"7\n";
		else cout <<"-1\n";
	}
}