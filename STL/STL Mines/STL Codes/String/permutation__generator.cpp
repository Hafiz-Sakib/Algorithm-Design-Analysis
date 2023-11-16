#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    string s;
    int cnt = 0;
    cin >> s;
    do
    {
        cout << s << endl;
        cnt++;
    } while (next_permutation(s.begin(), s.end()));

    cout << "Total Permutation : " << cnt << endl;

    return 0;
}