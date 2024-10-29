#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
    cin >> t;
    while(t--)
    {
    	string s;
        long long res = 0;
        cin >> s;
        while(s.find("100") != -1)
        {
            s.erase(s.find("100"), 3);
            res+=3;
        }

        if(res == 0) cout << "";
        else cout << res << '\n';
    }
    
    
	return 0;
}