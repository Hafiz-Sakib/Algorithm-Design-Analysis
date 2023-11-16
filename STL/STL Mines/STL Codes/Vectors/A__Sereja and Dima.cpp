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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        // cin >> v[i];
    }

    int s = 0, d = 0, turn = 1;

    while (!v.empty())
    {
        if (turn == 1)
        {
            if (*v.begin() > v.back())
            {
                s += *v.begin();
                v.erase(v.begin());
            }
            else
            {
                s += v.back();
                v.pop_back();
            }

            turn = 2;
        }
        else
        {
            if (*v.begin() > v.back())
            {
                d += *v.begin();
                v.erase(v.begin());
            }
            else
            {
                d += v.back();
                v.pop_back();
            }

            turn = 1;
        }
    }

    cout << s << " " << d << endl;

    return 0;
}