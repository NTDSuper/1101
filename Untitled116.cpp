#include<iostream>
using namespace std;
long long fibo[10000]={0};
void tinh(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=10000;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
int main(){
	tinh();
	int t;cin >> t;
		while(t--){
		long long a;cin >> a;
		for(int i=0;i<=10000;i++){
			if (fibo[i] >= a)
        {
            if (a == fibo[i])
                cout << "YES\n";
            else
                cout << "NO\n";break;
		}
	}
}
	return 0;
}