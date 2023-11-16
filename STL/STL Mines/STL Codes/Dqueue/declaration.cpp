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

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.pop_front();
    dq.pop_back();

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    return 0;
}