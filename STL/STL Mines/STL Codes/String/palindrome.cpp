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
    string s, p;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        p = p + s[i];
    }
    if (s == p)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}