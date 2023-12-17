#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;

#define pb push_back
#define mp make_pair
#define in insert
#define fi first
#define se second
#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define mod 1000000007
const int mx = 1e8 + 123;
const double eps = 1e-12;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    Boost;
    // Knapsack
    vi values = {60, 100, 120};
    vi weights = {10, 20, 30};
    int W = 50;
    int n = values.size();
    vector<vi> dp(n + 1, vi(W + 1, 0));
    for (int i = 1; i <= n; ++i)
    {
        for (int w = 1; w <= W; ++w)
        {
            if (weights[i - 1] > w)
            {
                dp[i][w] = dp[i - 1][w];
            }
            else
            {
                dp[i][w] = max(dp[i - 1][w], values[i - 1] + dp[i - 1][w - weights[i - 1]]);
            }
        }
    }

    int maxValue = dp[n][W];

    cout << "Maximum value in Knapsack = " << maxValue << endl;

    return 0;
}
