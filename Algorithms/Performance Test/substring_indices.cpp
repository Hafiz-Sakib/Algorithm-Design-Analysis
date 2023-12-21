#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, p;
    cin >> s >> p;
    vector<int> idx;
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        bool match = 1;
        for (int j = 0; j < p.size(); ++j)
        {
            if (s[i + j] != p[j])
            {
                match = 0;
                break;
            }
        }
        if (match)
        {
            c++;
            // substring ta bad dite chaile, i+=(p.size()) kora lagbe
            idx.push_back(i + 1);
        }
    }

    for (auto u : idx)
    {
        cout << u << ' ';
    }

    return 0;
}
