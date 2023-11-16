#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    // Queue decleration

    // Push an element in queue
    q.push(5);
    q.push(10);
    q.push(15);
    q.emplace(20);
    // Push an element in Queue (emplace does it too!)

    cout << q.size() << endl;
    // getting size of queue

    if (q.empty())
    {
        cout << "Empty" << endl;
        // Check if the queue is empty or not
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    cout << q.front() << " ... " << q.back() << endl;
    // Print first & last element

    while (q.size() > 0)
    {
        cout << q.front() << " ";
        // Printing Queue process
        q.pop();
        // Delete the first element
    }

    queue<int> q2;
    q.swap(q2);
    // Swap the elements of 2 queue

    return 0;
}
