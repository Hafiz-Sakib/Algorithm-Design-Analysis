#include <bits/stdc++.h>
using namespace std;

const int inf = 1e7;
const int n = 1e3;

vector<pair<int, int>> g[n];
// { node , weight}

void dijkstra(int source)
{
    vector<int> distance(n, inf);
    vector<bool> visited(n, 0);

    set<pair<int, int>> st;
    // {weight , node}

    st.insert({0, source});
    distance[source] = 0;

    while (!st.empty())
    {
        auto node = *st.begin();
        // will give the minimum pair {weight , node}

        int v = node.second;
        int dist = node.first;
        st.erase(st.begin());

        if (visited[v])
        {
            continue;
        }

        visited[v] = 1;

        // Traverse to the child of v,for relaxation
        for (auto child : g[v])
        {
            int child_v = child.first;
            int wt = child.second;

            // Relaxation
            if ((distance[v] + wt) < distance[child_v])
            {
                distance[child_v] = distance[v] + wt;
                st.insert({distance[child_v], child_v});
            }
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        g[u].push_back({v, wt});
        g[v].push_back({u, wt});
        // u indexed node connected with v node containing wt weight
    }

    return 0;
}

/*
8 17
0 1 9
0 4 7
0 3 3
1 4 8
1 5 11
1 7 6
1 3 17
1 2 2
2 7 3
2 6 11
2 5 19
3 4 5
4 6 5
4 5 12
5 7 13
5 6 6
6 7 8
*/
