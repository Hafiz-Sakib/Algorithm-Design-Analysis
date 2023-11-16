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
stack<int> s;

bool isEmpty()
{
    return s.empty();
}

void push(int a)
{
    s.push(a);
}

bool isFull(int n)
{
    return n == s.size();
}

int pop()
{
    s.pop();
}
int getMin(stack<int> &s)
{
    int mn = 2e9;

    while (!s.empty())
    {
        mn = min(s.top(), mn);
        s.pop();
    }

    return mn;
}

int main()
{
    Boost;
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        while (!isEmpty())
        {
            pop();
        }

        while (!isFull(n))
        {
            cin >> a;
            push(a);
        }
        cout << getMin(s) << endl;
    }
    return 0;
}

// https://practice.geeksforgeeks.org/problems/special-stack/1
