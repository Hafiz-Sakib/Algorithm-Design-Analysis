/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int upper, lower, num, n;
    cout << "How Many Numbers You Want to Genarate ?" << endl;
    cin >> n;

    cout << "Enter Lowest Number : ";
    cin >> lower;
    cout << "Enter Highest Number : ";
    cin >> upper;

    for (int i = 0; i < n; i++)
    {
        num = (rand() % (upper - lower + 1)) + lower;
        cout << num << " ";
    }
    cout << endl;

    return 0;
}