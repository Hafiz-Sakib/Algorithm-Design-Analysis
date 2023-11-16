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
    cout << s << "\n"
         << st << endl;
    return 0;
}