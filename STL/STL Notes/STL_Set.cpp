#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Set holds only unique value and arrange in ascending order by default
    set<int> s;

    // Set declaration for arrange value in descending order
    /*  set<int,greater<int>> s;  */

    // Insert value in set
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.emplace(5);

    // max_size() tells the capacity
    cout << s.size() << endl
         << s.max_size() << endl;

    // iterator
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Erase a data from set by value
    s.erase(2);

    // Erase a data from set by iterator
    set<int>::iterator it2;
    it2 = s.begin();

    // advance() for deleting certain index
    advance(it, 1);
    s.erase(it);

    // Print using auto iterator
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;

    if (s.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // Finding an element from set
    set<int>::iterator it3;
    it3 = s.find(1);
    if (it3 != s.end())
    {
        cout << "Number Found! " << *it3 << endl;
    }
    else
    {
        cout << "Not Found!" << endl;
    }

    // Another way to find using count()
    if (s.count(1))
    {
        cout << "1 Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    // Delete all data from set
    s.clear();

    // upper_bound() => points the same or nearest larger value
    // lower_bound() => points the nearest larger value
    set<int> s1 = {1, 2, 3, 4, 5, 6};
    set<int>::iterator iter;
    iter = s1.lower_bound(2);
    if (iter == s1.end())
    {
        cout << "The number is larger than the greater element" << endl;
    }
    else
    {
        cout << "The lower bound of 2 is: " << *iter << endl;
    }

    // Upper Bound =>

    set<int>::iterator iter2;
    iter2 = s1.upper_bound(2);
    if (iter2 == s1.end())
    {
        cout << "The number is equal or larger than the greater element" << endl;
    }
    else
    {
        cout << "The upper bound of 2 is: " << *iter2 << endl;
    }

    // swap two sets
    s.swap(s1);
    // Assign a set to another
    s = s1;

    return 0;
}
