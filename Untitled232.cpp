#include"thuvientoado.h"
#include<windows.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include <windows.h>
#include <vector>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <time.h>
#include <random>
using namespace std;
int x[22]={0,0,0,0,0,0,0,1,2,3,3,3,3,3,3,4,5,5,5,5,5,5};
int y[22]={0,1,2,3,4,5,6,6,6,0,1,2,3,4,5,6,0,1,2,3,4,5};
int main(){
	int check=0;
	int xcu[22]={-1};
	int ycu[22]={-1};
	while(true){
		for(int j=0;j<22;j++){
			gotoxy(xcu[j],ycu[j]);
			cout <<" ";
		}
		for(int i=0;i<22;i++){
			gotoxy(x[i],y[i]);
			cout <<"0";
		}
		for(int k=0;k<22;k++){
			xcu[k]=x[k];
			ycu[k]=y[k];
		}
//-------------------------------------------------
		if(x[21]==50){
			check=1;
		}
		else if(x[0]==0){
			check=0;
		}
		else if(y[0]==0 && check==3){
			check=2;
		}
		else if(y[0]==20 && check==2){
			check=3;
		}		
//-------------------------------------------------		
		if(check==0){
			for(int i=0;i<22;i++){
				x[i]++;
		}
		}
		if(check==1){
			for(int i=0;i<22;i++){
					x[i]--;
				}
			}
		if(check==2){
			for(int i=0;i<22;i++){
					y[i]++;
				}
			}
		if(check==3){
			for(int i=0;i<22;i++){
					y[i]--;
				}
			}	
//-----------------------------------
	if(_kbhit()==true){
		char c=_getch();
		if(c=='s') check=2;
		if(c=='w') check=3;
		if(c=='a') check=1;
		if(c=='d') check=0;
	}
	Sleep(200);		
	}	
}