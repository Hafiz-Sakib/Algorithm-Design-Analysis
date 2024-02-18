#include <bits/stdc++.h>
using namespace std;

const int mx = 1e7;
vector<int> parent(mx);
vector<int> set_size(mx);

void make(int v)
{
    parent[v] = v;
    set_size[v] = 1;
}

int find(int v)
{
    if (v == parent[v])
    {
        return v;
    }
    /*
   path compression,
   setting all parent nodes root node while calling recursively!
   */
    return parent[v] = find(parent[v]);
}

void union_sets(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        // Union by set_size
        if (set_size[a] < set_size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        set_size[a] += set_size[b];
    }
}

int main()
{

    int n, e, total_cost = 0;
    cin >> n >> e;
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < e; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }

    sort(edges.begin(), edges.end());

    for (int i = 1; i <= n; i++)
    {
        make(i);
    }

    for (auto edge : edges)
    {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if (find(u) == find(v))
        {
            continue;
        }
        union_sets(u, v);
        total_cost += wt;
    }

    cout << "Minimum Cost Spanning Tree Cost = " << total_cost << endl;

    return 0;
}