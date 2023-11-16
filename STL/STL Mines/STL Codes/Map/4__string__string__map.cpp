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
    map<string, string> gender;

    gender["Sakib"] = "Male";
    gender["Tamim"] = "Male";
    gender["Mushi"] = "Male";
    gender["Jahanara"] = "FeMale";
    gender["Salma"] = "Feale";

    cout << gender["Mushi"] << endl;
    cout << gender["sakib"] << endl;
    cout << gender["Jahanara"] << endl;

    return 0;
}