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
    string s = "AabcBek";
    sort(s.begin(), s.end());
    sort(s.rbegin(), s.rend());
    cout << s;
    return 0;
}