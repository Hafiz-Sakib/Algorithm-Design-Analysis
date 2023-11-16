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
    set<pair<int, int>> s;

    s.insert({2, 3});
    s.insert({2, 4});
    s.insert({2, 3});
    s.insert({2, 5});
    s.insert({2, 5});

    cout << "Size : " << s.size() << endl;

    for (auto u : s)
    {
        cout << u.first << " " << u.second << endl;
    }
    return 0;
}