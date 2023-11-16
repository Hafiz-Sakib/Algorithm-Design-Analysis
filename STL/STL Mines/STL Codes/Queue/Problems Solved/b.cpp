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
    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> m;
        int n, sum = 0;
        cin >> n;

        string s;
        cin >> s;

        for (auto u : s)
        {
            // cout << "String Elements Are :" << u << endl;
            m[u]++;
        }

        for (auto u : m)
        {
            //  cout << u.first << " " << u.second << endl;
            if (u.second == 1)
            {
                sum = sum + 2;
            }
            else if (u.second > 1)
            {
                sum = u.second + sum + 1;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
