// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
#define ll long long int
void path(vector<int> &parent, int j)
{
    if (parent[j] == -1)
    {
        cout << j;
        return;
    }
    printf("%d ", j);
    path(parent, parent[j]);
}
void solve()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> edges;
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
        edges.push_back({v, u, w});
    }
    vector<int> parent(n + 1, -1);
    //initialize distance array
    vector<int> dist(n + 1, 1e9);
    int src;
    cin >> src;    //input source
    dist[src] = 0; // initialize source distance to 0
    //iterate n-1 times to relax each edge
    bool negative_cycle;
    for (int i = 1; i < n; i++)
    {
        negative_cycle = false; //to detect -ve cycle
        for (auto it : edges)
        {
            int u, v, w;
            u = it[0];
            v = it[1];
            w = it[2];
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                parent[v] = u;
                negative_cycle = true;
            }
        }
    }
    if (negative_cycle)
        cout << "negative cycle present";
    else
    {
        for (int i = 1; i < n + 1; i++)
        {
            path(parent, i);
            cout << " : " << dist[i] << endl;
        }
    }
}
int main()
{
// Setting up Input/ Output
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // Driver Code
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
