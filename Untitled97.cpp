#include<iostream>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int cnt=0;
		for(int i=1;i*i<=a;i=i++){
			 if (a % i == 0)
        {
            if (i % 2 == 0)
                cnt++;
            if ((a / i) % 2 == 0 && i * i != a)
                cnt++;
    }
		}
        cout << cnt<<endl;
	
}
	return 0;
}