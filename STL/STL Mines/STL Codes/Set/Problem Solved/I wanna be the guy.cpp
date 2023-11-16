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

    set<int> s;
    int n;
    cin >> n;
    int nx, ny;

    cin >> nx;

    for (int i = 0; i < nx; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    cin >> ny;

    for (int i = 0; i < ny; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    if (s.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}