#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
bool isvowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main()
{
    Boost;
    string s;
    vector<string> v;
    int cnt[] = {5, 7, 5};
    for (int i = 0; i < 3; i++)
    {
        char c;
        cin >> c;
        getline(cin, s);
        s = c + s;
        v.push_back(s);
    }
    for (int i = 0; i < 3; i++)
    {
        int cntr = 0;
        for (auto u : v[i])
        {
            if (isvowel(u))
            {
                cntr++;
            }
        }
        if (cnt[i] != cntr)
        {
            return cout << "NO\n", 0;
        }
    }
    cout << "YES\n";

    return 0;
}