#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define vecMax(data) *max_element(data.begin(), data.end())
#define vecMin(data) *min_element(data.begin(), data.end())
#define vecSum(data) accumulate(data.begin(), data.end(), 0)
#define vecCount(data, key) count(data.begin(), data.end(), key)
#define Reverse(data) reverse(data.begin(), data.end())
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int main()
{
    Boost;

    vector<long long int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }

    int sum = vecSum(v);
    cout << sum << endl;

    int Max = vecMax(v);
    cout << Max << endl;

    int Min = vecMin(v);
    cout << Min << endl;

    int Count = vecCount(v, 1);
    cout << Count << endl;

    string s = "AabcBek";
    sort(s.rbegin(), s.rend());
    cout << s << endl;
    Reverse(s);
    cout << s;

    return 0;
}