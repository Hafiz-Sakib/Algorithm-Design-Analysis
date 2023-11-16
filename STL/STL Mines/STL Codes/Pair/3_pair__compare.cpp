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
    pair<int, int> p1, p2;
    p1 = {5, 6};
    p2 = {2, 3};

    if (p1 > p2)
    {
        cout << "First Pair is Greatest";
    }
    else
    {
        cout << "Second Pair is Greatest";
    }

    return 0;
}