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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 != 0)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }
        if (i == (n - 1))
        {
            cout << "it" << endl;
        }
        else
        {
            cout << "that "; // untill last print "it"
        }
    }
    return 0;
}