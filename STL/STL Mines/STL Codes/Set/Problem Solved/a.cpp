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
    long long int tc = 0;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        string tmp = str;
        reverse(tmp.begin(), tmp.end());
        cout << str + tmp << endl;
    }

    return 0;
}