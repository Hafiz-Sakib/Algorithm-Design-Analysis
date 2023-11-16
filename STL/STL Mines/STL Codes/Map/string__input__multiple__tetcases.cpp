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
    int a;
    cin >> a;
    while (a--)
    {
        string s;
        char c;
        cin >> c;
        getline(cin, s); // the devil in the sky
        s = c + s;
        cout << s;
    }

    return 0;
}