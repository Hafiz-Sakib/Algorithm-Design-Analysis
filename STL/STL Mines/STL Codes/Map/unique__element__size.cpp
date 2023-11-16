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
    map<string, int> info;
    info["Tamim"] = 28;
    info["Shakib"] = 75;
    info["Mahrafee"] = 2;
    info["Mushfiq"] = 45;
    info["Tamim"] = 328;
    info["Shakib"] = 175;
    info["Shakib"] = 275;
    info["Shakib"] = 375;
    info["Tamim"] = 128;
    info["Tamim"] = 228;

    cout << info.size() << endl;

    return 0;
}