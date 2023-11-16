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

int a[100000 + 23];
int main()
{
    Boost;
    int box;
    cin >> box;
    map<int, int> count;

    for (int i = 0; i < box; i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }

    int maxi = 0;

    for (auto u : count)
    {

        if (u.second > maxi)
        {
            maxi = u.second;
        }

        // maxi = max(maxi, u.second);
    }

    cout << maxi;

    return 0;
}