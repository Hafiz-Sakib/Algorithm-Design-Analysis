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
    int box;
    cin >> box;
    map<int, int> count;
    int maxi = 0;
    for (int i = 0; i < box; i++)
    {
        int a;
        cin >> a;
        count[a]++;
        maxi = max(maxi, count[a]);
    }

    cout << maxi;

    return 0;
}