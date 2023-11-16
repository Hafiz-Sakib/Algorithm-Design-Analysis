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
    set<string> s;
    s.insert("mushi");
    s.insert("mushi");
    s.insert("tamim");
    s.insert("taskin");
    s.insert("mash");
    s.insert("mash");
    s.insert("taskin");
    s.insert("taskin");
    s.insert("liton");
    s.insert("Imrul");
    s.insert("mushi");
    s.insert("mash");
    s.insert("Afif");
    s.insert("Anamul");
    s.insert("Sakib");

    cout << s.size() << endl;

    for (auto x : s)
    {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}