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
        priority_queue<long long int, vector<long long int>, greater<long long int>> q;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }

        long long ans = 0;

        while (q.size() > 1)
        {
            long long int a = q.top();
            q.pop();

            long long int b = q.top();
            q.pop();

            ans = ans + a + b;

            q.push(a + b);
        }

        cout << ans << endl;
    }
    return 0;
}

// https://www.spoj.com/problems/REDARR2/