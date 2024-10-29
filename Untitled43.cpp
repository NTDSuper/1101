#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;int b;cin >> a >> b;
	int arr[100001];
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
	int res=0;
	while(res<b){
		int temp=arr[0];
		int cnt=0;
		while(cnt<a-1){
			arr[cnt]=arr[cnt+1];
			cnt++;
		}
		arr[a-1]=temp;
		res++;
	}
	for(int i=0;i<a;i++){
		cout << arr[i] << " ";
	} 
	cout << endl;
	}
	return 0;
}