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
    for (int i = 1; i <= t; i++)
    {
        string s;
        char c;
        cin >> c;
        getline(cin, s);
        s = c + s;
        cout << "Case "
             << i << " :" << s << endl;
    }

    return 0;
}