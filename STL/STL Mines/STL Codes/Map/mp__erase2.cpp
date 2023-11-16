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
    map<string, int> mp;
    mp["aa"] = 30;
    mp["ff"] = 40;
    mp["cc"] = 70;
    mp["bb"] = 60;
    mp["ee"] = 30;
    mp["dd"] = 45;

    mp.erase("aa");
    // mp.clear();

    for (auto u : mp)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}