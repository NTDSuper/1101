#include <ctype.h>
#include<bits/stdc++.h>
#include <string>
using namespace std;
// Hàm có sử dụng con trỏ hàm như tham số
void Display(char str[], int (*Xtype)(int c)){
int index = 0;
while(str[index] != '\0'){
cout << (*Xtype)(str[index]); // Sử dụng con trỏ hàm 
index ++;
}
return;
}
// Hàm main, dùng lời gọi hàm đến con trỏ hàm
int main(){
char input[500];
cout << "Enter the string: ";
cin >> input;
char reply;
cout << "Display the string in uppercase or lowercase (u,l): ";
cin >> reply;
if(reply == 'l') // Hiển thị theo dạng lowercase
Display(input, tolower);
else // Hiển thị theo dạng uppercase
Display(input, toupper);
return 0;
}