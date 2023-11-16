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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int zero = 0; // 0s in a but 1 in b
        int one = 0;  // 1s in a but 0 in b
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0 && b[i] == 1)
            {
                zero++;
            }
            if (a[i] == 1 && b[i] == 0)
            {
                one++;
            }
        }
        if (zero == 0 && one == 0)
        {
            cout << 0;
        }
        else if (zero == one)
        {
            cout << 1;
        }
        else
        {
            if (zero == 0 || one == 0)
            {
                cout << abs(zero - one);
            }
            else
            {
                cout << abs(zero - one) + 1;
            }
        }
        cout << endl;
    }
    return 0;
}