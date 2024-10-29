#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long S = 0, T = 1;
    for (int i = 1; i <= n; ++i)
    {
        T *= i;
        S += T;
    }
    cout << S;
    return 0;
}