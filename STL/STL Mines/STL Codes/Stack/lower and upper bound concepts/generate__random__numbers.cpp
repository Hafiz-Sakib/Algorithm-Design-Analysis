/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int a, n;
    cout << "How Many Numbers You Want to Genarate ?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a = rand();
        cout << a << " ";
    }

    return 0;
}