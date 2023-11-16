#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    // Deque decleration
    dq.push_back(5);
    dq.push_back(10);
    dq.push_back(15);
    dq.push_front(1);

    int s = dq.size();
    // Get the size of deque
    cout << s << endl;

    deque<int>::iterator it, it2;
    it = dq.begin() + 2;
    dq.insert(it, 3, 0);
    // Insert element using iterator

    it2 = dq.begin() + 5;
    dq.erase(it, it2);
    // Erase element using iterator

    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
        // Print Deque (dq.at(i) can be used too)
    }

    dq.pop_front();
    // Delete first element
    dq.pop_back();
    // Delete Last element

    cout << endl
         << dq.front() << endl
         << dq.back() << endl;
    // front()=>First element, back()=>Last element

    dq.clear();
    // Delete all the elements of seque

    if (dq.empty())
    {
        cout << "Empty" << endl;
        // Check the deque if empty or not
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}
