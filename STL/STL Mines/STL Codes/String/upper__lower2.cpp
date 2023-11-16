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
    string s = "SaKiB", choto, boro;

    for (auto u : s)
    {
        char c = tolower(u);
        choto = choto + c;
    }

    for (auto u : s)
    {
        char c = toupper(u);
        boro = boro + c;
    }

    cout << choto << " " << boro << endl;

    return 0;
}