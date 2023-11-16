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
    int a[] = {2, 3, 41, 5, 6, 98, 78, 9};
    for (auto u : a)
    {
        cout << u << " ";
    }
    cout << endl;
    return 0;
}