#include<bits/stdc++.h>
using namespace std;
string s101="ABBADCCABDCCABD";
string s102="ACCABCDDBBCDDBB";
float tinhdiem(int a,char s[]){
	int dung=0;
	if(a==101){
		for(int i=0;i<15;i++){
			if(s[i]==s101[i]){
				dung++;
			}
		}

	}
	else if(a==102){
		for(int i=0;i<15;i++){
			if(s[i]==s102[i]){
				dung++;
			}
		}
	}
	float diem = (10.00/15)*dung;
	return diem;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		char s[15];
		cin >> a;
		for(int i=0;i<15;i++){
			cin >> s[i];
			s[i]=toupper(s[i]);
		}
		cout << setprecision(2) << fixed << tinhdiem(a,s) << endl;
	}
}
