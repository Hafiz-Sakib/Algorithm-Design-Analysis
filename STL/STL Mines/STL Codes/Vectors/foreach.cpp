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

    vector<int> v = {2, 3, 4, 5, 6, 7};

    for (auto u : v)
    {
        cout << u << " ";
    }

    cout << endl;

    return 0;
}