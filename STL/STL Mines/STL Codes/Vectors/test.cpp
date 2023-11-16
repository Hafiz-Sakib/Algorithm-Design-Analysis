#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    int n;
    cin >> n;
    vector<int> v(n);
    /*   for (int i = 0; i < n; i++)
      {
          int a;
          cin >> a;
          v.push_back(a);
          // cin >> v[i];
      } */
    cout << v.size() << endl;
    return 0;
}