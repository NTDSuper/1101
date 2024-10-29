#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,temp,res="";
	getline(cin,s);
	stringstream ss(s);
	vector<string> v1;
	while(ss >> temp){
		v1.push_back(temp);
	}
	for(int i=0;i<v1.size()-1;i++){
		v1[i][0]=toupper(v1[i][0]);
		for(int j=1;j<v1[i].size();j++){
			v1[i][j]=tolower(v1[i][j]);
		}
	}
	for(int j=0;j<v1[v1.size()-1].size();j++){
			v1[v1.size()-1][j]=toupper(v1[v1.size()-1][j]);
		}
	for(int i=0;i<v1.size()-2;i++){
		res=res + v1[i]+" ";
	}
	cout << res << v1[v1.size()-2] <<", "<<v1[v1.size()-1];
	
}