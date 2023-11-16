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
    int t;
    cin >> t;
    while (t--)
    {
        string s, a;
        cin >> s;
        a = s;
        reverse(s.begin(), s.end());
        if (a == s)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}

// https://www.hackerearth.com/problem/algorithm/the-palindrome-2/