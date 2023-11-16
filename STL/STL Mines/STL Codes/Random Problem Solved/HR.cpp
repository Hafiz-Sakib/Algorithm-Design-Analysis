
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int rem = 10 - n - 1;
        int ans = 6 * (rem * (rem + 1)) / 2;
        cout << ans << endl;
    }

    return 0;
}