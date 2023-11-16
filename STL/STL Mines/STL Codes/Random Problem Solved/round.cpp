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
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int m = 1;
        vector<int> v;
        while (n)
        {
            int last_digit = n % 10;
            if (last_digit * m > 0)
            {
                v.push_back(last_digit * m);
            }
            m = m * 10;
            n = n / 10;
        }
        cout << v.size() << endl;
        for (auto u : v)
        {
            cout << u << " ";
        }
        cout << endl;
    }

    return 0;
}