#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int main()
{
    optimize();
    vector<long long int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int size = unique(v.begin(), v.end()) - v.begin();

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}