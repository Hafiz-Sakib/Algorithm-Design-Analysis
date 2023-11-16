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

    // counting frequency of a given number x in n sized array

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<long long, long> mp;
    for (auto u : v)
    {
        mp[u]++;
    }

    cout << mp[x] << endl;

    return 0;
}