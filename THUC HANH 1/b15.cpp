#include<iostream>
using namespace std;

int main(){
		int sum=0;
		int a;cin >> a;
		for(int i=0;i<a;i++){
			int x;
			cin >> x;
		for(int j=2;j<=a;j++){
			while(x%j==0){
				x=x/j;
				sum=sum+j;
		}
		}
		if(x!=1){
			sum=sum+x;
			
		}}
	cout << sum << endl;

return 0;
}