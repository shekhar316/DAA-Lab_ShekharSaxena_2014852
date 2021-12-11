// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool iscycle(int src, vector<vector<int>> &adj, vector<bool> &vis, int parent)
{
    vis[src] = true;
    for (auto i : adj[src])
    {
        if (i != parent)
        {
            if (vis[i])
                return true;
            if (!vis[i] and iscycle(i, adj, vis, src))
            {
                return true;
            }
        }
    }
    return false;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    vector<bool> vis(n, false);
    bool cycle = false;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vis[0] = true;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i] and iscycle(i, adj, vis, -1))
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
        cout << "Yes Cycle Exists";
    else
        cout << "Cycle Not Present";
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
