#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    pair<int, vector<string>> p;
    p.first = 5;
    p.second = {"Sakib", "Akib", "Tamim", "Mushi", "Taskin", "Liton"};
    cout << p.first << endl;
    for (auto u : p.second)
    {
        cout << u << " ";
    }
    cout << "\n";
    return 0;
}