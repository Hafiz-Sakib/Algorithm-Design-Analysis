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
    float a = 56.2598;
    string s = to_string(a);
    s[0] = '8';
    cout << s;
    return 0;
}