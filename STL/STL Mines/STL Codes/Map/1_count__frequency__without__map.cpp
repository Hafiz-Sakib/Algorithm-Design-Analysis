#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int cnt[100231];

int main()
{
    Boost;

    vector<int> v = {2, 3, 3, 3, 4, 3, 3, 2, 2, 1, 8};
    for (auto u : v)
    {
        cnt[u]++;
    }

    for (int i = 0; i < 100231; i++)
    {
        if (cnt[i] > 0)
        {
            cout << i << " is occured " << cnt[i] << " "
                 << "times" << endl;
        }
    }

    return 0;
}