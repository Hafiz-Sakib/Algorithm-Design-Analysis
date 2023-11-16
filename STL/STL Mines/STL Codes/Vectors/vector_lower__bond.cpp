/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    vector<int> s = {6, 6, 8, 1200, 1400, 1600, 1900, 2100, 2300, 2400, 2600, 3000};

    int n;
    cin >> n;
    auto it = lower_bound(s.begin(), s.end(), n);

    cout << "Lower Bound of " << n << " is : " << *it << endl;
    return 0;
}