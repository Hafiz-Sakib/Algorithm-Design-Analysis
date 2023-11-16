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

    multiset<int> s = {8, 2, 3, 6, 4, 8, 9, 1, 2};

    cout << "Before erasing  Only One 2 : " << endl;

    for (auto u : s)
    {
        cout << u << " ";
    }

    cout << endl;
    /*
    Output :
    1 2 2 3 4 6 8 8 9
    */

    auto it = s.find(2);
    s.erase(it);

    cout << "After erasing  Only One 2 : " << endl;

    for (auto u : s)
    {
        cout << u << " ";
    }
    /*
    Output :
     1 2 3 4 6 8 8 9
    */

    return 0;
}