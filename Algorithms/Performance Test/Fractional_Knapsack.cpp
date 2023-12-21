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
    // { weight,cost }
    int n, capacity;
    cin >> n >> capacity;
    vector<pair<int, int>> v(n);
    for (auto &u : v)
    {
        cin >> u.first >> u.second;
    }
    double profit = 0;
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        if (capacity > 0)
        {
            int z = min(capacity, v[i].first);
            capacity -= z;
            profit += (z * v[i].second);
        }
        else
        {
            break;
        }
    }
    cout << "max profit : " << profit << endl;
    return 0;
}
