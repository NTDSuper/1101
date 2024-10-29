#include<bits/stdc++.h>
using namespace std;
void input(int a,int b[]){
	for(int i=0;i<a;i++){
		cin >> b[i];
	}
}

int dis(int a,int b[]){
	sort(b,b+a);
	int min=abs(b[0]-b[1]);
	for(int i=1;i<a-1;i++){
		if(min>abs(b[i]-b[i+1])) min=abs(b[i]-b[i+1]);
	}
	return min;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		input(a,arr);
		cout << dis(a,arr)<< endl;
	}
	return 0;
}