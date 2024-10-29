#include<bits/stdc++.h>
using namespace std;
string max(int a,int b){
	string s(a,'0');
	int s1=9;
	int i=0;
	while(i<a){
		if(b>=s1>0){
			s[i]=s1+'0';
			b=b-s1;
			i++;
		}
		else if(b==0){
			s[i]=0+'0';
			i++;
		}
		else{
			s1--;
		}
	}
	return s;
}
string min(int a,int b){
	string s(a,'0');
	int s1=9;
	int i=a-1;
	while(i>=0){
		if(b<10 && i>0){
			s[0]='1';
			s[i]=b-1+'0';
			for(int j=1;j<i;j++){
				s[j]='0';
			}
			break;
		}
		else if(b>=s1>0){
			s[i]=s1+'0';
			b=b-s1;
			i--;
		}
		else{
			s1--;
		}
	}
	return s;
}
int main(){
	int a,b;
	cin >> a >> b;
	if(9*a<b || b<=0){
		cout <<"-1 -1\n";
	}
	else{
		cout << min(a,b)<<" "<<max(a,b)<<endl;
	}
	return 0;
}