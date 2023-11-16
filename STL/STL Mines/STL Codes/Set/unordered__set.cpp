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

    unordered_set<int> s;

    s.insert(2);
    s.insert(2);
    s.insert(12);
    s.insert(6);
    s.insert(5);

    cout << "Size : " << s.size() << endl;

    for (auto u : s)
    {
        cout << u << " ";
    }
    return 0;
}