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
int main()
{
    Boost;

    set<int> s = {3, 6, 7, 9, 13, 24, 25, 28, 31, 37, 38, 40, 41, 48, 50, 55, 58, 60, 61, 66, 67, 69, 72, 73, 74, 79, 83, 88, 94, 95};

    cout << *s.begin() << endl; // print 1st element before delete

    s.erase(s.begin()); // delete 1st element

    cout << *s.begin() << endl; // print 1st element after delete

    // Delete Last Element

    cout << *--s.end() << endl; // print last element before delete

    s.erase(--s.end()); // delete last element

    cout << *--s.end() << endl; // print last element after delete

    return 0;
}