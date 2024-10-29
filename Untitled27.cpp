#include<bits/stdc++.h>
using namespace std;
int check(int a){
	int odd=0;
	int even=0;
	int gt=a;
	while(a!=0){
		int b=a%10;
		if(b%2==0) even++;
		else if(b%2==1) odd++;
		a=a/10;
	}
	if(odd==even) return gt;
	return 0;
}
int main(){
	int a;
	cin >> a;
	int cnt=0;
	for(int i=pow(10,a-1);i<=(pow(10,a)-1);i++){
		if(check(i)){cout << i <<" ";
		cnt++;
		} 
		if(cnt%10==0) cout << endl;
	}
	return 0;
}