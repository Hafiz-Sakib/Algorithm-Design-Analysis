#include <bits/stdc++.h>
#define loop(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define hi cout << "LOL" << endl;

using namespace std;

int main()
{
    int n;
    cin >> n;

    float c, w, K, k, tot_cost = 0;

    cin >> K;
    k = K;

    pair<float, pair<float, float>> p[n + 5];

    for (int i = 0; i < n; i++)
    {
        cin >> w >> c;

        p[i] = {c / w, {w, c}};
    }

    sort(p, p + n);

    reverse(p, p + n);

    for (int i = 0; i < n; i++)
    {
        cout << p[i].first << endl;
    }
    int j = 0;

    while (k > 0)
    {
        // cout<<p[j].first<<endl;
        if (k > p[j].second.first)
        {
            tot_cost += p[j].second.second;
        }
        else
        {
            tot_cost += k * p[j].first;
        }

        k -= p[j].second.first;
        j++;
        cout << tot_cost << endl;
    }
}

/*
7
14
1 6
4 18
7 7
2 10
2 3
3 5
5 15

*/