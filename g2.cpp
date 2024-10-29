#include<bits/stdc++.h>
#include <windows.h>
#include <vector>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <time.h>
#include <random>
using namespace std;
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE),
		coord
	);
}
int main(){
	int x=10;int y=0;
	int i =0;
	int xcu=-1,ycu=-1;
	while(true){
		
		gotoxy(xcu,ycu);
		cout << "                      ";
		xcu=x,ycu=y;
		gotoxy(x,y);
		cout << "Ngon ngu lap trinh c++";
		if(_kbhit()==true){
			char c=_getch();
			if(c=='s') i=0;
			if(c=='w') i=1;
			if(c=='a') i=2;
			if(c=='d') i=3;
		}
		if(i==0)
		{
			y++;
		}
		else if(i==1){
			y--;
		}
		else if(i==2){
			x--;
		}
		else if(i==3){
			x++;
		}
		if(y==100){
			i=1;
		}
		if(y==0){
			i=0;
		}
		if(x==0){
			i=3;
		}
		if(x==50){
			i=2;
		}
		if(i==2 && i==3){
			Sleep(20);
		}
		else
		Sleep(150);
	}
}