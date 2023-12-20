#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v = {{1, 2}, {5, 4}, {3, 2}, {1, 3}, {5, 6}, {3, 8}};
    for (auto u : v)
    {
        cout << u.first << ' ' << u.second << endl;
    }
    sort(v.begin(), v.end());
    for (auto u : v)
    {
        cout << u.first << ' ' << u.second << endl;
    }
    return 0;
}
