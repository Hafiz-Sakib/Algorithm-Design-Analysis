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
    string s, st;
    cin >> s >> st;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(st.begin(), st.end(), st.begin(), ::tolower);

    if (s < st)
    {
        cout << -1 << endl;
    }
    else if (s > st)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}