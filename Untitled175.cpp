#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, k, x;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> k >> x;

    int i = lower_bound(a.begin(), a.end(), x) - a.begin();int j = i;
    for (int z = k / 2; z >= 1; --z) {
        cout << a[i - z] << " ";
    }

    // Note: Phần tử khác x về index chứ không phải khác x về giá trị
    // Đoạn này mình làm while (a[j] == x) j++; và sai nên rút ra được vậy.
    if (a[j] == x) j++;
    for (int z = 0; z < k / 2; ++z) {
        cout << a[j + z] << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}