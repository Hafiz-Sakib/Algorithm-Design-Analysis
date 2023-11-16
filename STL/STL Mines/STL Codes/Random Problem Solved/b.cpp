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
        int n, max = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            int a = s[i];
            if (a > max)
            {
                max = a;
            }
        }
        cout << max - 96 << endl;
    }
    return 0;
}