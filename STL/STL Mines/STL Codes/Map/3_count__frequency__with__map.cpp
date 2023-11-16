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
    vector<long long int> v = {1564874541897, 1564874541897, 1564874541897, 658498798, 89787, -1, -2, -59, -59, -59, -59, -59, -59, -59, -59, -59, -59};
    map<long long int, long long int> m;

    /* Way 01 :

     for (int i = 0; i < v.size(); i++)
        {
            m[v[i]]++;
        }

        cout << m[1564874541897] << endl;

    */

    // Best & way 02 :: Foreach loop

    for (auto u : v)
    {
        m[u]++;
    }

    for (auto u : m)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}