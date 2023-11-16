#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }

    int ans = 0;

    for (auto u : m)
    {
        if (u.second >= u.first)
        {
            ans = ans + (u.second - u.first);
        }
        else
        {
            ans = ans + u.second;
        }
    }
    cout << ans << endl;
    return 0;
}

// Problem :

// https://atcoder.jp/contests/arc087/tasks/arc087_a