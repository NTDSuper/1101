#include<bits/stdc++.h>
using namespace std;
void input(int a,int b[]){
	for(int i=0;i<a;i++){
		cin >> b[i];
	}
}
int main(){
	int test;cin >> test;
	while(test--){
		int a;int b;
		cin >> a >> b;
		int arr1[100001],arr2[100001];
		input(a,arr1);
		input(b,arr2);
		sort(arr1,arr1+a);
		sort(arr2,arr2+b);
		long long kq=(long long)arr1[a-1]*arr2[0];
		cout << kq << endl;
	}
}