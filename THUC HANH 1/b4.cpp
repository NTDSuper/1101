#include<iostream>
using namespace std;
bool check(long long a,long long b){
	long long sum=0;
	for(int i=1;i<=a;i++){
		sum+=i%b;
	}
	return sum==b;
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;long long b;cin >> a >> b;
		cout << check(a,b)<<endl;
	}
	return 0;
}
