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
    for (int i = 1; i <= t; i++)
    {
        int n, m;
        cin >> n >> m;

        map<pair<int, int>, bool> visit;

        for (auto u : visit)
        {
            cout << u.first.first << u.first.second;
        }

        bool done = 1;

        while (m--)
        {
            int a, b;
            cin >> a >> b;

            if (visit[{a, b}])
            {
                done = 0;
            }

            visit[{a, b}] = 1;
        }

        if (done == 1)
        {
            cout << "Scenario #" << i << ": possible" << endl;
        }
        else
        {
            cout << "Scenario #" << i << ": impossible" << endl;
        }
    }
    return 0;
}
