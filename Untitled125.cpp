#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a][a]={0};
		for(int i=0;i<a;i++){
			for(int j=0;j<a;j++){
				cin >> arr[i][j];
			}
		}
		set<int> s1;
		set<int>s2;
		for(int i=0;i<a;i++){
			s1.insert(arr[0][i]);
		}
		for(int i=1;i<a;i++){
			for(int j=0;j<a;j++){
				if(s1.find(arr[i][j])!=s1.end()){	
					s2.insert(arr[i][j]);
				}	
			}
//			if(s2.empty()){
	//			cout <<"0\n";return 0;
		//	}
			//else{
				s1=s2;
				s2.clear();
			//}
		}
		cout << s1.size()<<endl;
	}
}