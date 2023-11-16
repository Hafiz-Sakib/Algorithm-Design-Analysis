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
    int t;
    cin >> t;
    while (t--)
    {
        string data;
        cin >> data;
        transform(data.begin(), data.end(), data.begin(), ::toupper);

        cout << (data == "YES" ? "YES" : "NO") << '\n';
    }
    return 0;
}