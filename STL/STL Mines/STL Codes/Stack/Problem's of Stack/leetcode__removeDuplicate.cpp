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
int main()
{
    Boost;

    string s = "abbaca";

    stack<char> st;

    for (auto u : s)
    {
        if (!st.empty())
        {
            if (!st.empty() && st.top() == u)
                st.pop();
            else
                st.push(u);
        }
        else
            st.push(u);
    }

    s.clear();
    while (!st.empty())
    {
        s += st.top();
        st.pop();
    }

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}

// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/