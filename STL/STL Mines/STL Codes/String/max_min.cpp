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
    cin >> s;
    char max = *max_element(s.begin(), s.end());
    cout << max << endl;
    char min = *min_element(s.begin(), s.end());
    cout << min;
    return 0;
}