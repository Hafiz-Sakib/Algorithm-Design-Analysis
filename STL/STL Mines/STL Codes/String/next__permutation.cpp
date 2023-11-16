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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (next_permutation(s.begin(), s.end()))
        {
            cout << s << endl;
        }
        else
        {
            cout << "no answer\n";
        }
    }
    return 0;
}