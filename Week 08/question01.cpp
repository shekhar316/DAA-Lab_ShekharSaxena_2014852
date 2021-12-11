// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
#define ll long long int
void solve()
{
    int nodes, edges;
    cin >> nodes;
    cin >> edges;
    vector<pair<int, int>> graph[nodes];
    int source, destination, weight;
    for (int i = 0; i < edges; i++)
    {
        cin >> source >> destination >> weight;
        graph[source].push_back(make_pair(destination, weight));
        graph[destination].push_back(make_pair(source, weight));
    }
    int key[nodes];
    int parent[nodes];
    bool mst[nodes];
    for (int i = 0; i < nodes; i++)
    {
        key[i] = INT_MAX;
        mst[i] = false;
        parent[i] = -1;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;
    key[0] = 0;
    parent[0] = 0;
    pq.push({0, 0});
    for (int i = 0; i < nodes - 1; i++)
    {
        int u = pq.top().second;
        pq.pop();
        mst[u] = true;
        for (auto it : graph[i])
        {
            int dest = it.first;
            int wt = it.second;
            if (mst[dest] == false && wt < key[dest])
            {
                parent[dest] = u;
                pq.push({key[dest], dest});
                key[dest] = wt;
            }
        }
    }
    int mstwt = 0;
    for (int i = 0; i < nodes; i++)
        mstwt += key[i];
    cout << "Min Spanning Weight is: " << mstwt;
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
