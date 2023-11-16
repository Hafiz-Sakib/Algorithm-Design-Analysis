#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bool isvowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main()
{
    Boost;
    string s, a;
    cin >> s;
    for (auto u : s)
    {
        char c = tolower(u);
        if (isvowel(c) == 0)
        {
            a = a + '.';
            a = a + c;
        }
    }
    cout << a << endl;

    return 0;
}