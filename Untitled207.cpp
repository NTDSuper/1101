#include<bits/stdc++.h>
using namespace std;
void sapxep(int arr[],int res){
	int tmp=arr[0];
	arr[0]=arr[res-1];
	arr[res-1]=arr[0];
	sort(arr+1,arr+res,greater<int>());
}
int main(){
	int t;cin >> t;
	while(t--){
		int a;cin >> a;
		int arr[a];
		int arr1[a];int cnt=a-2;
		int res=0;
		for(int i=0;i<a;i++){
			cin >> arr[i];
		}
		while(cnt >= 0){
			if(arr[cnt]>arr[cnt+1]){
				int tmp=arr[a-1];
				arr[a-1]=arr[cnt];
				arr[cnt]=tmp;
				sort(arr+cnt+1,arr+a,greater<int>());
				break;
			}
			cnt--;
			cout << cnt << endl;
		}
		if(cnt<0){
			sort(arr,arr+a);
		}	
		for(int i=0;i<a;i++){
				cout << arr[i]<<" ";
			}
			cout << endl;
	}
}