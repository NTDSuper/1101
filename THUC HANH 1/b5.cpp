#include<iostream>
#include<math.h>
using namespace std;
void sang(int a,bool b[]){
	for(int i=0;i<a;i++){
		b[i]=1;
	}
	b[0]=b[1]=0;
	for(int i=2;i<=sqrt(a);i++){
		if(b[i]==1){
			for(int j=i*i;j<=a;j=j+i){
				b[j]=0;
			}
		}
	}
}
int check(int a,bool b[]){
	for(int i=2;i<=a;i++){
		if(b[i]==1 && b[a-i]==1) return i;
	}
	return 0;
}
int main(){
	int t;cin >> t;
	bool sang1[1000001];
	sang(1000001,sang1);
	while(t--){
		int a;
		cin >> a;
		if(check(a,sang1))
		cout << check(a,sang1) << " " << a-check(a,sang1)<< endl;
		else{
			cout <<"-1 \n";
		} 
	}
	return 0;
}