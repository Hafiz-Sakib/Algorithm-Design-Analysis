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
    int m, n;
    cin >> m >> n;

    priority_queue<long long> q;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (!q.empty())
        {
            int a = q.top();
            q.pop();

            ans += a;

            a--;

            if (a > 0)
            {
                q.push(a);
            }
        }
    }

    cout << ans << endl;

    return 0;
}

// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/