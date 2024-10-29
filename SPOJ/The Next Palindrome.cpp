/*A positive integer is called a palindrome if its representation in the decimal system is the same when read from left to right and from right to left. 
For a given positive integer K of not more than 1000000 digits, write the value of the smallest palindrome larger than K to output. 
Numbers are always displayed without leading zeros.

Input
The first line contains integer t, the number of test cases. Integers K are given in the next t lines.

Output
For each K, output the smallest palindrome larger than K.

Example
Input:
2
808
2133

Output:
818
2222
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> generateNextPalindrome(int num[], int n) {
	    // code here
	    vector<int> ans;
	    
	    int i, j, carry, solved=0;
	    
	    for(i=(n+1)/2; i<n; i++)
	    {
	        if(num[i]<num[n-i-1]){
	            num[i]=num[n-i-1];
	            
	            for(j=i+1; j<n; j++)
	            {
	                num[j]=num[n-j-1];
	            }
	            solved=1;
	            break;
	            
	        }else if(num[i]>num[n-i-1]){
	            break;
	        }
	    }
	    
	    if(solved==1){
	        for(i=0; i<n; i++)
	        {
	            ans.push_back(num[i]);
	        }
	        return ans;
	    }
	    
	    carry=1;
	    for(i=(n-1)/2; i>=0; i--)
	    {
	        if(num[i]+carry==10){
	                num[i]=0;
	                carry=1;
	            }else{
	                num[i]++;
	                carry=0;
	                break;
	            }
	    }
	    
	    if(carry==1){
	        ans.push_back(1);
	    }
	    
	    for(i=0; i<n; i++)
	    {
	        ans.push_back(num[i]);
	    }
	    
	    if(carry==1){
	        n++;
	    }
	    
	    for(i=(n+1)/2; i<n; i++)
	    {
	        ans[i]=ans[n-i-1];
	    }
	    
	    return ans;
	}

int main(){
	int t;
	cin >> t;
	while(t--){
	string s;cin >> s;
	int n=s.size();
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=s[i]-'0';
	}
	vector<int> a=generateNextPalindrome(arr,n);
	for(int i=0;i<a.size();i++){
		cout << a[i];
	}
	cout << endl;
	}
	return 0;
}