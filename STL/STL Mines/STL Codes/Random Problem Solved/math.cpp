#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v;

    for (int i = 0; i < s.size(); i += 2)
    {
        v.push_back(s[i] - '0');
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << ((i + 1 < v.size()) ? "+" : "");
    }
    cout << endl;
    return 0;
}
