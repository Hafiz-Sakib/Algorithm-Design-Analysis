/*

string author;
author = Hafiz_Sakib;

*/

// https://www.hackerrank.com/challenges/cpp-sets/problem

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
    int q;
    cin >> q;
    while (q--)
    {
        int t, n;
        cin >> t >> n;
        if (t == 1)
        {
            s.insert(n);
        }
        else if (t == 2)
        {
            s.erase(n);
        }
        else
        {
            if (s.count(n))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}