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
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(7);

    cout << s.top(); // will show the lastest element added in stack / top element of stack

    return 0;
}