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
    set<int> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    if (s.size() >= 2)
    {
        // cout << *(++s.begin()) <<endl;

        // Jodi 3 no element ta print korte bolto :
        int p, c = 0;
        for (auto u : s)
        {
            if (c == 3)
            {
                break;
            }
            p = u;
            c++;
        }
        cout << p << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}