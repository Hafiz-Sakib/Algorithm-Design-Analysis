#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Default MultiSet arrange data in ascending order
    multiset<int> ms, ms1;
    // MultiSet declaration for descending order

    multiset<int, greater<int>> ms2;
    // Assign Value to MultiSet

    ms.insert(2);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(4);
    ms.insert(5);
    ms.insert(5);
    ms.insert(6);
    // emplace() does the same of insert()
    ms.emplace(7);

    cout << ms.size() << endl;

    // Print using iterator
    multiset<int>::iterator it;
    for (it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Erase a element
    it = ms.begin();
    ms.erase(2);
    ms.erase(it);

    // Print using auto iterator
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    if (!ms2.empty())
    {
        // Delete all the elements of MultiSet
        ms2.clear();
    }
    // Finding from MultiSet using auto iterator
    auto it2 = ms.find(1);
    if (it2 == ms.end())
    {
        cout << "Not Found" << endl;
    }

    else
    {
        cout << "Found" << endl;
    }

    // Counting(How many Times Present in Multiset?)
    cout << ms.count(7) << endl;

    // Lower Bound points the same number
    // If the number does not exists, the closest larger number
    // If that too does not exists, returns .end()

    auto it3 = ms.lower_bound(3);
    if (it3 != ms.end())
    {
        cout << *it3 << endl;
    }

    // Upper Bound returns the next larger number of the query number
    // If does not exists, returns .end()

    auto it4 = ms.upper_bound(5);
    if (it4 != ms.end())
    {
        cout << *it4 << endl;
    }

    // assign a set to another set
    ms1 = ms;

    // Swap two sets
    ms.swap(ms1);

    return 0;
}
