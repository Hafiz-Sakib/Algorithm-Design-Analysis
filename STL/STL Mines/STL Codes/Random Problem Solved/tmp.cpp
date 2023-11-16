#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define endl "\n"
const int MOD = 1e9 + 7;
#define pb push_back
#define mp make_pair
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(0);
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define asc(i, a, n) for (int i = a; i < n; i++)
#define dsc(i, a, n) for (int i = (n - 1); i >= a; i--)
const int maxn = 1e7;
vector<int> hippo;
set<std::pair<int, int>> us;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        return gcd(b, a % b);
    }
}
int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int countdigits(int n)
{
    return floor(log10(n) + 1);
}
bool isSquare(int x)
{
    int y = sqrt(x);
    return y * y == x;
}
int prime(int p)
{
    if (p == 1)
        return 0;
    for (int i = 2; i * i <= p; i++)
    {
        if (p % i == 0 && i < p)
            return i;
    }
    return 1;
}
bool isPrime(int n)
{

    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
void precisionCompute(int x, int y, int n)
{
    int d = x / y;
    for (int i = 0; i <= n; i++)
    {
        cout << d;
        x = x - (y * d);
        if (x == 0)
            break;
        x = x * 10;
        d = x / y;
        if (i == 0)
            cout << ".";
    }
}
void reverseStr(string &s)
{
    int n = s.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(s[i], s[n - i - 1]);
}
bool isPalindrome(string str)
{
    int low = 0;
    int high = str.length() - 1;

    while (low < high)
    {
        // if a mismatch happens
        if (str[low] != str[high])
        {
            return false;
        }

        low++;
        high--;
    }

    return true;
}
bool countFreq(int a[], int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    for (auto x : mp)
    {
        if (x.second > 1)
        {
            return false;
        }
    }
    return true;
}
bool isPower(int x, int y)
{
    if (x == 1)
        return (y == 1);
    int pow = 1;
    while (pow < y)
        pow *= x;
    return (pow == y);
}
int Nearestprime(int n)
{

    // All prime numbers are odd except two
    if (n & 1)
        n -= 2;
    else
        n--;

    int i, j;
    for (i = n; i >= 2; i -= 2)
    {
        if (i % 2 == 0)
            continue;
        for (j = 3; j <= sqrt(i); j += 2)
        {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
            return i;
    }

    // It will only be executed when n is 3
    return 2;
}
int ceill(int n, int x)
{

    if (n % x)
    {
        return (n / x) + 1;
    }

    else
    {
        return n / x;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    int x = 0;
    while (n)
    {
        if (n % 10 != 0)
        {
            int r = n % 10;
            ans.pb(r * pow(10, x));
        }
        x++;
        n /= 10;
    }
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}
signed main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
