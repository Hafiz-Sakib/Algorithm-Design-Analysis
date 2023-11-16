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
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int a;
        cin >> s >> a;
        //  m[s] = a;
        m.insert({s, a});
    }
    cout << "Your Inputed Data : " << endl;
    for (auto u : m)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}