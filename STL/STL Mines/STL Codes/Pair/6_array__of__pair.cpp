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
    pair<int, int> p[] = {{6, 5}, {2, 3}};
    sort(p, p + 2);

    for (int i = 0; i < 2; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
}
