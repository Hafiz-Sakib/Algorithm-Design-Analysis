#include <bits/stdc++.h>
using namespace std;
int root[50];
bool root_find(int u, int v)
{
    if (root[u] == root[v])
    {
        return true;
    }
    return false;
}
void union_(int u, int v, int vertex)
{
    int tmp = root[u];
    for (int i = 0; i < vertex; i++)
    {
        if (root[i] == tmp)
        {
            root[i] = root[v];
        }
    }
}
int main()
{
    int vertex, edge, w, u, v, tot_cost = 0;
    cin >> vertex >> edge;
    for (int i = 1; i <= vertex; i++)
    {
        root[i] = i;
    }
    pair<int, pair<int, int>> p[edge + 5];
    for (int i = 0; i < edge; i++)
    {
        cin >> w >> u >> v;
        p[i] = {w, {u, v}};
    }
    sort(p + 0, p + edge);
    for (int i = 0; i < edge; i++)
    {
        int x = p[i].second.first;
        int y = p[i].second.second;
        if (!root_find(x, y))
        {
            union_(x, y, vertex);
            tot_cost += p[i].first;
        }
    }
    cout << "Total Cost : " << tot_cost << endl;
}

/*
6 9
2 4 5
2 5 6
3 2 3
3 3 5
5 2 4
4 3 4
5 4 6
7 1 2
8 1 3
*/
