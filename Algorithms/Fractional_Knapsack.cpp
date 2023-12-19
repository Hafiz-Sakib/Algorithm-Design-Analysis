#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    Boost;
    // {weight,price}
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    int weight = 20;
    for (int i = 0; i < v.size(); i++)
    {
        v[i].first *= -1;
    }
    sort(v.begin(), v.end());

    return 0;
}
