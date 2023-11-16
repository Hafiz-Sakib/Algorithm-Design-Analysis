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
    string s = "sakib";
    cout << s.back() << endl;
    s.pop_back();
    cout << s;
    return 0;
}