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
    string s = "deacbAAA";
    //  s.erase(s.begin() + 2);
    s.erase(s.end() - 1);
    cout << s << endl;
    return 0;
}