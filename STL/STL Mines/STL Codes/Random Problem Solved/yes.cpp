#include <bits/stdc++.h>
using namespace std;
#define sz(s) int(s.size())
#define ll long long
#define F first
#define S second
#define pb push_back
const int N = 1e5 + 7, mod = 1e9;

void solve()
{
    string s;
    cin >> s;
    if (s[0] != 'Y' && s[0] != 'e' && s[0] != 's') // couldn't Yess, YES or se.
    {
        cout << "NO\n"; // could hear esY, YesYes, sYes, e,
        return;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if ((s[i] == 'Y' && s[i - 1] != 's') || (s[i] == 'e' && s[i - 1] != 'Y') || (s[i] == 's' && s[i - 1] != 'e'))
        {
            cout << "NO\n";
            return;
        }
        if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
signed main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}