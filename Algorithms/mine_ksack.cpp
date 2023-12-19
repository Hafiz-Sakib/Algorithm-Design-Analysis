#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    Boost;
    // { weight , profit }
    vector<pair<int, int>> v = {{21, 7}, {24, 4}, {12, 6}, {40, 5}, {30, 6}};
    int weight = 20;
    double profit = 0;
    for (int i = 0; i < v.size(); i++)
    {
        v[i].first *= -1;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (weight > 0 && v[i].first <= weight)
        {
            weight -= (-1 * v[i].first);
            profit += v[i].second;
            continue;
        }
        else
        {
            profit += v[i].second * (weight / v[i].first);
            break;
        }
    }

    cout << profit << endl;
    return 0;
}
