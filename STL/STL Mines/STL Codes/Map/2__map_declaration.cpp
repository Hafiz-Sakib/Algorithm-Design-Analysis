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

    // declaration :

    //  map<key_dataType,value_datatType>mapName;

    map<string, int> id;

    id["Sakib"] = 101;
    id["Tamim"] = 102;
    id["Liton"] = 103;
    id["Taskin"] = 104;
    id["Miraz"] = 105;

    cout << id["Miraz"] << endl;

    return 0;
}