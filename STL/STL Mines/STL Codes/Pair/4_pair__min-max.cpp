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

    pair<int, int> p = max(p1, p2); // it will check regarding 1st element of the pairs

    cout << p.first << " " << p.second << endl;

    return 0;
}