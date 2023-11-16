#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

    ll n, ans = 0;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int flag = 0;

    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] < v[i + 1])
        {
            flag = 1;
            ans = i + 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (flag == 1)
    {
        for (ll i = ans; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}