/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bool isBalanced(char c, char d)
{
    if ((c == '(' && d == ')') || (c == '{' && d == '}') || (c == '[' && d == ']'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Boost;
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        stack<char> s;
        bool ok = 1;

        for (auto u : str)
        {
            if (u == '(' || u == '{' || u == '[')
            {
                s.push(u);
            }
            else
            {
                if (s.empty())
                {
                    ok = 0;
                    break;
                }
                else
                {
                    if (isBalanced(s.top(), u))
                    {
                        s.pop();
                    }
                    else
                    {
                        ok = 0;
                        break;
                    }
                }
            }
        }
        if (!s.empty())
        {
            ok = 0;
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
