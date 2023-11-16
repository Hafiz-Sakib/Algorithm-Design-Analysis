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
queue<int> _push(int arr[], int n);

void _pop(queue<int> s);

queue<int> _push(int arr[], int n)
{
    // return a queue with all elements of arr inserted in it
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
    }
    return q;
}

void _pop(queue<int> s)
{
    // print front and dequeue for each element until it becomes empty
    while (!s.empty())
    {
        cout << s.front() << " ";
        s.pop();
    }
}

int main()
{
    Boost;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    queue<int> mys = _push(arr, n);

    _pop(mys);

    cout << endl;

    return 0;
}

// https: // practice.geeksforgeeks.org/problems/queue-designer/1