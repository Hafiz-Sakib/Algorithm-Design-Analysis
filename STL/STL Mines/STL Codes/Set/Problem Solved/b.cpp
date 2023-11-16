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

    long long int t;
    cin >> t;
    while (t--)
    {

        // 1
        // 1 2 3 2
        // 1 1 1

        long long int num;
        cin >> num;
        if (num == 2)
        {
            cout << 1 << " " << 3 << endl;
        }
        else if (num & 1)
        {
            for (int i = 0; i < num; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << 1 << " " << 2 << " " << 3 << " ";

            for (int i = 3; i < num; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}