#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    bool cnt[1000001]={0};
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (x < 0 || x >= n)
            continue;
        cnt[x] = 1;
    }
    for (int i = 0; i < n; ++i) {
        if (cnt[i]==1)
            cout << i << " ";
        else
            cout << "-1 ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}