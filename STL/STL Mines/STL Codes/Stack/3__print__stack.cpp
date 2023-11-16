/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
#include <iostream>
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
    stack<int> s;

    auto p = s;
    // p nam er variable e (jetar type automatically detect korbe), s stack er value guli copy kore rakhlam

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(7);

    cout << "Stack Size is : " << s.size() << endl;

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    cout << "Stack Size is : " << s.size() << endl;

    return 0;
}