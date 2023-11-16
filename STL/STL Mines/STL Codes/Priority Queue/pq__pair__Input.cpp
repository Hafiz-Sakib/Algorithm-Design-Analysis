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
    priority_queue<pair<int, int>> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        // q.push({a, b});
        q.push(make_pair(a, b));
    }

    cout << "Output : " << endl;

    while (!q.empty())
    {
        cout << q.top().first << " " << q.top().second << endl;
        q.pop();
    }

    return 0;
}