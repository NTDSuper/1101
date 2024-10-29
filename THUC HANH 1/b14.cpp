#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		set <long long> se;
		long long arr[3][10001];
		int a,b,c;cin >> a >> b >> c;
		for(int i=0;i<a;i++){
			cin >> arr[0][i];
		}
		for(int i=0;i<b;i++){
			cin >> arr[1][i];
		}
		for(int i=0;i<c;i++){
			cin >> arr[2][i];
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(arr[0][i]==arr[1][j]){
					for(int k=0;k<c;k++){
						if(arr[2][k]==arr[0][i]){
							se.insert(arr[2][k]);
						}
					}
				}
			}
		}
		if(se.size()!=0){for(long long x : se){
        	cout << x << ' ';
		}}
		else cout <<"-1";
    
    cout << endl;
	}
	return 0;
}