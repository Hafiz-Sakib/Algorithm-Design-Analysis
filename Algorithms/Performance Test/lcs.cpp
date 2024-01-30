#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;
    int m = x.size() + 1, n = y.size() + 1;
    vector<vector<string>> b(m, vector<string>(n, " "));
    vector<vector<int>> c(m, vector<int>(n, 0));

    for (int i = 1; i < m; i++)
    {
        c[i][0] = 0;
    }
    for (int j = 0; j < n; j++)
    {
        c[0][j] = 0;
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = "\\";
                // Taking the value From left Diagonal cell
            }
            else if (c[i - 1][j] >= c[i][j - 1])
            {
                c[i][j] = c[i - 1][j];
                b[i][j] = "|";
                // Taking the value From Upper cell
            }
            else
            {
                c[i][j] = c[i][j - 1];
                b[i][j] = "->";
                // Taking the value From Left Side cell
            }
        }
    }

    for (int i = 0; i < c.size(); i++)
    {
        for (int u : c[i])
        {
            cout << u << ' ';
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < b.size(); i++)
    {
        for (string u : b[i])
        {
            cout << u << ' ';
        }
        cout << endl;
    }

    cout << "Length of LCS is : " << c[m - 1][n - 1] << endl;

    return 0;
}
