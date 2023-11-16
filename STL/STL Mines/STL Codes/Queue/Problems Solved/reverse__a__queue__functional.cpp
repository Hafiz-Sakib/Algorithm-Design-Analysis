/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

queue<int> rev(queue<int> q)
{
    stack<int> s;
    queue<int> r;

    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        r.push(s.top());
        s.pop();
    }
    return r;
}
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }

    auto a = q;
    // Before Reversing e Show Korar Time e "q" er data remove hoye jabe tai onno variable e copy kore sekhan theke data show korabo !

    cout << "Before Reversing The Queue : " << endl;

    while (!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }

    queue<int> ulta = rev(q);

    cout << "\nAfter Reversing The Queue : " << endl;

    while (!ulta.empty())
    {
        cout << ulta.front() << " ";
        ulta.pop();
    }

    cout << endl;

    return 0;
}
