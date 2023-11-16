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

multiset<int> multisetInsert(int arr[], int n)
{
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        s.insert(a);
    }

    return s;
}

void multisetDisplay(multiset<int> s)
{
    // Multiset display print elements
    for (auto u : s)
    {
        cout << u << " ";
    }
    cout << endl;
}

void multisetErase(multiset<int> &s, int x)
{
    // If and else condition to erase x from multiset
    if (s.count(x) >= 1)
    {
        s.erase(x);
        cout << "erased " << x;
    }
    else
    {
        cout << "not found";
    }
    cout << endl;
}

int main()
{
    Boost;
    int arr[] = {1, 2, 7, 1, 2, 3, 4, 8, 9, 4, 78, 91, 2, 1};

    multiset<int> s = {8, 2, 3, 6, 4, 8, 9, 1, 2};

    multiset<int> p = multisetInsert(arr, 14);

    multisetDisplay(multisetInsert(arr, 14));

    multisetDisplay(p);

    multisetDisplay(s);

    multisetErase(s, 2);

    return 0;
}

// https://practice.geeksforgeeks.org/problems/multiset-operations/1