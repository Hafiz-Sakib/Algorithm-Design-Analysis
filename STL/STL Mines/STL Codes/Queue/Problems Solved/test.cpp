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
    queue<int> q;
    queue<int> r;
    int n, k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }

    while (!q.empty())
    {
        cout << q.front() << " " << endl;
    }

    return 0;
}

//// https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1