#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    // Declaring list.

    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    // Store data in list using push_back() function as last element.

    li.push_front(4);
    // Store data using push_front() as first element.

    li.push_front(5);
    // Process to insert or delete in list
    list<int>::iterator ite;
    ite = li.begin();
    advance(ite, 2);
    li.insert(ite, 3);
    // li.erase(ite);
    list<int>::iterator it;
    for (it = li.begin(); it != li.end(); it++)
    {
        cout << *it << " ";
        // Printing list data of list using iterator.
    }
    cout << endl;

    for (auto it : li)
    {
        cout << it << " ";
        // Printing list data using auto iterator.
    }

    li.pop_front();
    // Delete the first element of list.
    li.pop_back();
    // Delete the last element of list.

    cout << endl
         << "First element: " << li.front() << endl;
    // Print first element of list
    cout << "Last element: " << li.back() << endl;
    // Print last element of list.

    li.clear();
    // Clear or delete all elements of list.

    cout << "Current size of list: " << li.size() << endl;
    // Get size of list using size()

    if (li.empty())
    {
        cout << "Empty" << endl;
        // Check the list is empty or not
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    list<int> li2 = {1, 2, 2, 3, 3, 4, 4, 5, 6};
    list<int> li3 = {1, 20, 3, 40, 50};

    li2.remove(2);
    // Remove a certain value(2) from the list
    li2.reverse();
    // Reverse the elements of list
    li2.sort();
    // Sort the elements of list increasingly
    li2.unique();
    // make the list unique, no element matches the side element
    li2.swap(li3);
    // Swap 2 list
    li2.merge(li3);
    // Merge 2 list in 1 list

    for (auto it : li2)
    {
        cout << it << " ";
    }

    return 0;
}
