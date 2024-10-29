#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int a,b;cin >> a >> b;
		vector<int> v,v1;
		for(int i=0;i<a;i++){
			int k;cin >> k;
			v.push_back(k);
		}
		int arr[b];
		for(int i=0;i<b;i++){
			cin >> arr[i];
		}
		sort(v.begin(),v.end());
		for(int i=0;i<b;i++){
			int j=0;
			while(j<v.size()){
				if(arr[i]==v[j]){
					v1.push_back(v[j]);
					v.erase(v.begin()+j);
				}
				else{
					j++;
				}
			}
		}
		for(int i=0;i<v.size();i++){
			v1.push_back(v[i]);
		}
		for(int i=0;i<v1.size();i++){
			cout << v1[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}