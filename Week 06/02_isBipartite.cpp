// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852


#include <bits/stdc++.h>
using namespace std;

#define ll long long ll

bool isBipartite(vector <vector<ll> > & graph, ll V, ll s){
    vector <ll> colorArr(V, -1);
    colorArr[s] = 1;

    queue <ll> q;
    q.push(s);

    while (!q.empty()){

        ll u = q.front();
        q.pop();
        if (graph[u][u] == 1){
            return false;
        }
 
        for (ll v = 0; v < V; ++v){
            if (graph[u][v] && colorArr[v] == -1){
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }
            else if (graph[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }
    return true;

}

void solve() {
    ll n;
    cin >> n;
    vector <vector<ll> > graph;

    for(ll i = 0; i < n; i++){
        vector <ll> v;
        for(ll j = 0; j < n; j++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        graph.push_back(v);
    }

    if(isBipartite(graph, n, 0)){
        cout << "Yes";
    }else{
        cout << "No";
    }

}

ll main() {
    // Setting up Input/ Output
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Driver Code
    ll t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
