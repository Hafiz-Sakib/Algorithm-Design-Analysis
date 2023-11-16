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
    map<int, int> mp;
    mp[2] = 20;
    mp[6] = 60;
    mp[3] = 30;
    mp[1] = 10;
    mp[5] = 50;
    mp[4] = 40;

    mp.erase(3);
    // mp.clear();

    for (auto u : mp)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}