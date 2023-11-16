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

bool isBalanced(char c1, char c2)
{
    if ((c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    Boost;
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<char> st;
        bool done = 1;

        for (auto u : s)
        {
            if (u == '(' || u == '{' || u == '[')
            {
                st.push(u);
            }
            else
            {
                if (st.empty())
                {
                    done = 0;
                    break;
                }
                else
                {
                    if (isBalanced(st.top(), u))
                    {
                        st.pop();
                    }
                    else
                    {
                        done = 0;
                        break;
                    }
                }
            }
        }

        if (!st.empty())
        {
            done = 0;
        }

        if (done)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}