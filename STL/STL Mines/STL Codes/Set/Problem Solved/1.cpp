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
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's')
            {
                flag = false;
            }
        }

        // could hear esY, YesYes, sYes, e,
        // but you couldn't Yess, YES or se.

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'Y' && s[i + 1] != 'e')
            {
                flag = false;
            }
            if (s[i] == 'e' && s[i + 1] != 's')
            {
                flag = false;
            }
            if (s[i] == 's' && s[i + 1] != 'Y')
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}