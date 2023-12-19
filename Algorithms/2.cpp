#include <bits/stdc++.h>
using namespace std;

vector<int> occurances;
void findidx(string s, string p)
{

    for (int i = 0; i <= s.length() - p.length(); ++i)
    {
        bool match = true;
        for (int j = 0; j < p.length(); ++j)
        {
            if (s[i + j] != p[j])
            {
                match = false;
                break;
            }
        }

        if (match)
        {
            occurances.push_back(i);
        }
    }
}

// Main function
int main()
{
    string s, p;
    cin >> s >> p;
    char c;
    cin >> c;
    findidx(s, p);
    for (int idx : occurances)
    {
        cout << idx << " ";
    }
    cout << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            cout << i << ' ';
        }
    }
    cout << endl;

    return 0;
}
