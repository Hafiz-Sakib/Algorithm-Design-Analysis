/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    int data, query;
    cin >> data >> query;
    map<string, string> ip;
    while (data--)
    {
        string name, adress;
        cin >> name >> adress;
        ip[adress] = name;
    }
    while (query--)
    {
        string key, value;
        /*

        Input :

        main 192.168.0.2
        replica 192.168.0.1
        block 192.168.0.1;
        proxy 192.168.0.2;

        Output :

         block 192.168.0.1; #replica
         proxy 192.168.0.2; #main

        */
        cin >> key >> value;
        value.pop_back();
        cout << key << " " << value << "; #" << ip[value] << endl;
    }
    return 0;
}