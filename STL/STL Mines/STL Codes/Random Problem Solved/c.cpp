#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s[n], d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            d[i] = s[i];
        }
        sort(d, d + n);
        for (int i = 0; i < n; i++)
        {
            if (d[n - 1] != s[i])
            {
                cout << s[i] - d[n - 1] << " ";
            }
            else
            {
                cout << s[i] - d[n - 2] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}