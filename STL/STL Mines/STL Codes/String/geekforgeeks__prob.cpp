/// In the name of ALLAH

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;

        int digitSum = 0;

        for (auto u : s)
        {
            digitSum += (u - '0');
        }

        string str = to_string(digitSum);

        string tmp = str;

        reverse(tmp.begin(), tmp.end());

        if (tmp == str)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
// https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1