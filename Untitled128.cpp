#include<bits/stdc++.h>
using namespace std;
void nhap(int *ptr,int **arr){
	for(int i=0;i<*ptr;i++){
		for(int j=0;j<*ptr;j++)
		cin >> (*(*(arr+i))+j);
	}
}
int main(){
	int *ptr=new int ();
	cin >> *ptr;
	int **arr=new int *[*ptr];
	for(int i=0;i<*ptr;i++){
		*(arr+i)=new int [*ptr];
	}
	nhap(ptr,*arr);
	cout << *ptr<<endl;
	for(int i=0;i<*ptr;i++){
		for(int j=0;j<*ptr;j++)
		cout << *(arr+i)+j<<" ";
	}
}