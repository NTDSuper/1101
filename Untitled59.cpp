#include <stdio.h>
#include<bits/stdc++.h>
#include <conio.h>
using namespace std;
int main(void){
int x = 12, *px, *py;
cout << "x = " << x << endl;
px = &x; // Con trỏ px trỏ tới địa chỉ của x
cout << "px = &x, *px = " << *px << endl;
*px = *px + 20; // Nội dung của px là 32
cout << "*px = *px+20, x = " << x << endl;
py = px; // Cho py trỏ tới chỗ mà px trỏ: địa chỉ của x 
*py += 15; // Nội dung của py là 47
cout << "py = px, *py +=15, x = " << x << endl;
}