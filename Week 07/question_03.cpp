// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
#define ll long long int
#define V 100
#define INF INT_MAX
int arr[100][100];
int shortestpath(int arr[][V], int u, int v, int k, int n)
{
    if (k == 0 && u == v)
        return 0;
    if (k == 1 && arr[u][v] != INF)
        return arr[u][v];
    if (k <= 0)
        return INF;
    int res = INF;
    for (int i = 0; i < n; i++)
    {
        if (arr[u][i] != INF && u != i && v != i)
        {
            int rec_res = shortestpath(arr, i, v, k - 1, n);
            if (rec_res != INF)
                res = min(res, arr[u][i] + rec_res);
        }
    }
    return res;
}
void solve()
{
    int n;
    cout << "for values INF enter -1" << endl;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if (a < 0)
            {
                arr[i][j] = INF;
            }
            else
                arr[i][j] = a;
        }
    }
    int u, v, k;
    cin >> u >> v >> k;
    cout << "weight of the shortest path is " << shortestpath(arr, u - 1, v1, k, n) << endl;
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
