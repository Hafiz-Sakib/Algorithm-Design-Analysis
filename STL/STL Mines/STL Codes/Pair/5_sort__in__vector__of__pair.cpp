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
    vector<pair<int, int>> v;

    v.push_back({6, 5});
    v.push_back({2, 3});
    v.push_back({4, 5});
    v.push_back({6, 1});
    v.push_back({1, 9});
    v.push_back({9, 3});

    sort(v.begin(), v.end());
    for (auto u : v)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}