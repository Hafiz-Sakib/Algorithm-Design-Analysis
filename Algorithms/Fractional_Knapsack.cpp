#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pii;
typedef vector<pair<ll, ll>> vpii;

bool cmp(pii a, pii b)
{
    return a.second * b.first > a.first * b.second;
}
int main()
{
    // { weight,profit }
    vector<pair<int, int>> v = {{21, 7}, {24, 4}, {12, 6}, {40, 5}, {30, 6}};
    int capacity = 20, i = 0;
    double profit = 0;
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        int z = min(capacity, v[i].first);
        capacity -= z;
        profit += (z * v[i].second);
    }
    cout << "max profit : " << profit << endl;

    return 0;
}
