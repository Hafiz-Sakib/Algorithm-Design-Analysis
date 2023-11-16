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
    // Given a list of N words. Count the number of words that appear exactly twice in the list.
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
        }
        int cnt = 0;
        for (auto u : mp)
        {
            if (u.second == 2)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}