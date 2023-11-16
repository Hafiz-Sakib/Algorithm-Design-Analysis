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
    info["Mahmudullah"] = 30;
    info["Taskin"] = 10;
    info["Mustafiz"] = 18;
    info["Liton"] = 11;
    info["Mushfiq"] = 15;

    for (auto u : info)
    {
        cout << u.first << " " << u.second << endl;
    }

    // Output :

    // output will be based on key of the pair(1st element of the pair,no chance on 2nd element because key 2 ta howar chance nai....same key 2 bar ashle 2nd time/last time jeta ashbe otar value nibe )

    // Here 1st element / key is string so output will be be lexicographically!

    /*
        Liton 11
        Mahmudullah 30
        Mahrafee 2
        Mushfiq 15
        Mustafiz 18
        Shakib 75
        Tamim 28
        Taskin 10
   */

    return 0;
}