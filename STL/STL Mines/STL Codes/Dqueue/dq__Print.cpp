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
    deque<int> dq;

    dq.push_front(4);
    dq.push_front(5);
    dq.push_back(5);
    dq.push_back(3);
    dq.push_front(5);
    dq.push_front(4);
    // 4 5 5 4 5 3

    cout << "Size : " << dq.size() << endl;

    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }

    cout << endl
         << "Size : " << dq.size() << endl;

    return 0;
}