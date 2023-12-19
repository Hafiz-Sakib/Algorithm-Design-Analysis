#include <bits/stdc++.h>
using namespace std;

int count(string s, string p)
{
    int count = 0;
    for (int i = 0; i <= s.size(); i++)
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
            ++count;
        }
    }
    return count;
}
int main()
{
    string s, p;
    cin >> s >> p;
    int occurrences = count(s, p);
    cout << "The " << p << " appears " << occurrences << " times in the main string." << endl;
    return 0;
}
