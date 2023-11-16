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
    string s = "SaKiB", choto, Boro;
    for (auto u : s)
    {
        char c = tolower(u);
        choto = choto + c;
    }
    for (auto u : s)
    {
        char c = toupper(u);
        Boro = Boro + c;
    }

    cout << choto << " " << Boro << endl;

    return 0;
}