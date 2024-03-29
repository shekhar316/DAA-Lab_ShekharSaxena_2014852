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
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < e; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        graph[s].push_back({d, w});
        graph[d].push_back({s, w});
    }
    vector<int> dist(n + 1, INT_MAX);
    set<pair<int, int>> s;
    int source;
    cin >> source;
    dist[source] = 0;
    s.insert({0, source});
    vector<int> parent(n + 1, -1);
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        for (auto it : graph[x.second])
        {
            if (dist[it.first] > dist[x.second] + it.second)
            {
                s.erase({dist[it.first], it.first});
                dist[it.first] = dist[x.second] + it.second;
                s.insert({dist[it.first], it.first});
                parent[it.first] = x.second;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        path(parent, i);
        cout << " : " << dist[i] << endl;
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
