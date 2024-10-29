#include<iostream>
using namespace std;
int main(){
	int test;cin >>test;
	long long sum=0;
	long long s=1;
	for(int i=1;i<=test;i++){
		s=s*i;
		sum=sum+s;
	}
	cout << sum << endl;
}