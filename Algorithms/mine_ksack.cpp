#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    Boost;
    // { profit,weight }
    vector<pair<int, int>> v = {{21, 7}, {24, 4}, {12, 6}, {40, 5}, {30, 6}};
    int capacity = 20;
    double profit = 0;
    for (int i = 0; i < v.size(); i++)
    {
        v[i].first *= -1;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (capacity > 0 && v[i].first <= capacity)
        {
            capacity -= v[i].second;
            profit += (-1 * v[i].second);
            continue;
        }
        else
        {
            profit += ((-1 * v[i].first) * (capacity / v[i].second));
            break;
        }
    }
    cout << profit << endl;
    for (auto u : v)
    {
        // cout << u.first << ' ' << u.second << endl;
    }
    return 0;
}
