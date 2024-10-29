#include<bits/stdc++.h>
using namespace std;
int khoang(int max,int min){
	return min+(int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}
int main(){
	int max,min;
	cin >> min >> max;
	srand((int)time(0));
    int sole=0;
    int sochan=0;
    for(int i=0;i<max;i++){
    	int snn=khoang(min,max)%RAND_MAX;
    	if(snn%2==0) sochan++;
    	if(snn%2==1) sole++;
	}
	cout << sole << endl << sochan; 
    return 0;
}