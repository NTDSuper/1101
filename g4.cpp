#include"thuvientoado.h"
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void setcolor(int backgound_color, int text_color)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    int color_code = backgound_color * 16 + text_color;
    SetConsoleTextAttribute(hStdout, color_code);
}
void vehang(int x,int y,int length){
	for(int i=0;i<=length;i++){
		gotoxy(x,y);
		cout <<"-";
		x++;
	}
}
void vecot(int x,int y,int tall){
	for(int i=0;i<=tall;i++){
		gotoxy(x,y);
		cout <<"|";
		y++;
	}
}
void vegoc(int x,int y){
	gotoxy(x,y);
	cout <<"+";
}
void viettenmenu(int x,int y,int tall,int length,string s){
	int x1=x;
	int x2=x+length;
	int y1=y,y2=y+tall+1;
	int gty=(y1+y2)/2-1;
	int gtx=(x1+x2-s.size())/2;
	gotoxy(gtx+1,gty);
	cout << s ;
}
void dieukhien(int x,int y,int tall,int length,vector<string> menu,int a){
	int x1=x;
	int dem=0;
	int x2=x+length;
	int y1=y,y2=y+tall+1;
	int gty=(y1+y2)/2-1;
	int gtx=(x1+x2-menu[dem].size())/2;
	while(true){
		if(kbhit()==true){
			char c=getch();
			if(c=='s'){
				gotoxy(gtx+1,gty);
				setcolor(0,7);
				cout << menu[dem];
				if(dem>=a-1){
					dem=0;
					y1=y,y2=y+tall+1;
				}
				else{
					dem++;
					y1=y1+tall;
					y2=y2+tall;
				}
				gty=(y1+y2)/2-1;
				gotoxy(gtx+1,gty);
				setcolor(7,3);
				cout << menu[dem];
			}
			if(c =='w'){
				gotoxy(gtx+1,gty);
				setcolor(0,7);
				cout << menu[dem];
				if(dem<=0){
					dem=a-1;
					y1=y+tall*a,y2=y+tall*a-1;
				}
				else{
					dem--;
					y1=y1-tall;
					y2=y2-tall;
				}
				gty=(y1+y2)/2-1;
				gotoxy(gtx+1,gty);
				setcolor(7,3);
				cout << menu[dem];
			}
			
		}
	}
}
int main(){
	// menu 4 o length 10 tall 3
	int x,y,tall,length;
	int a;
	cin >> x >> y >> tall >> length >> a;
	cin.ignore();
	string s;getline(cin,s);
	vector<string> menu;
	system("cls");
	int x1=x,y1=y;
	for(int i=0;i<=a;i++){
		vehang(x1,y1,length);
		y1=y1+tall;
	}
	x1=x,y1=y;
	for(int i=0;i<2;i++){
		vecot(x1,y1,tall*a);
		x1=x1+length;
	}
	x1=x,y1=y;
	vegoc(x,y);
	vegoc(x+length,y);
	vegoc(x,y+tall*a);
	vegoc(x+length,y+tall*a);
	int slmenu=0;
	for(int i=0;i<a;i++){
		slmenu++;
		string s1=to_string(slmenu);
		if(i==0){
			setcolor(7,3);
		}
		else{
			setcolor(0,7);
		}
		viettenmenu(x1,y1,tall,length,s+" "+s1);
		y1=y1+tall;
		menu.push_back(s+" "+s1);
		
	}
	dieukhien(x,y,tall,length,menu,a);
	sleep(1500);
}