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
        int n, x;
        cin >> n >> x;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        int size = unique(v.begin(), v.end()) - v.begin();

        if (size == x)
        {
            cout << "Good" << endl;
        }
        else if (size < x)
        {
            cout << "Bad" << endl;
        }
        else if (size > x)
        {
            cout << "Average" << endl;
        }
    }
    return 0;
}