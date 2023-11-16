#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1;
    int n = 50;
    while (n--)
    {
        s1 += "Yes";
    }

    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 1;
        for (auto u : s)
        {
            if (u != 'Y' && u != 'e' && u != 's')
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }

        // Yess : no

        // Sound  : YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes

        // could hear esY, YesYes, sYes, e,

        // but you couldn't Yess, YES or se.

        if (flag)
        {
            if (s1.find(s) != -1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}