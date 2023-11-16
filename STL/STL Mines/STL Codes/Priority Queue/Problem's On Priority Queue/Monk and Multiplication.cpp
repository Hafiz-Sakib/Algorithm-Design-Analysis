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
const int mx = 1e5 + 123;
int a[mx];
int main()
{
    Boost;
    priority_queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        q.push(a[i]);
        if (q.size() >= 3)
        {
            int t1, t2, t3;

            t1 = q.top();
            q.pop();

            t2 = q.top();
            q.pop();

            t3 = q.top();
            q.pop();

            cout << 1LL * t1 * t2 * t3 << endl;

            q.push(t1);
            q.push(t2);
            q.push(t3);
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}

// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/