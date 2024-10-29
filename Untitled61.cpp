#include<bits/stdc++.h>
using namespace std;
int main(){
	int test ;scanf("%s",&test);
	while(test--){
		scanf("\n");
		char input[10000];
		fgets(input, sizeof(input), stdin);
		char temp[100][1000];
		int cnt=0;
		char *token=strtok(input," ");
		while(token!=NULL){
			strcpy(temp[cnt++],token);
			token=strtok(NULL," ");
		}
		for(int i=cnt-1;i>=0;i--){
			cout << temp[i] <<" ";
		}

	}
}