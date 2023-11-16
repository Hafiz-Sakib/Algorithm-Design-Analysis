/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    map<int, int> mp;

    mp[5] = 1;
    mp[7] = 4;
    mp[9] = 3;
    mp[11] = 6;
    mp[13] = 3;

    int n;
    cin >> n;

    auto it = mp.lower_bound(n);

    cout << (*it).first << " " << (*it).second << endl;

    return 0;
}