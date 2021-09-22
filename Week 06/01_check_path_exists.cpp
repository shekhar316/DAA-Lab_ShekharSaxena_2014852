// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 01
// Problem: binary_search
// Description: Mentioned in Problem_Description.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int


bool isPathBFS(vector <vector<ll> > & graph, ll nodes, ll s, ll d){
    bool visited[nodes];
    for(int i = 0;i<nodes;++i){
        visited[i] = false;
    }
    
    queue <int> traversal;
    traversal.push(s);
    visited[s-1] = true;
    
    while(!traversal.empty()){
        s = traversal.front();
        traversal.pop();
        
        for(int i = 0;i < (int)graph[s-1].size();++i){
            if(graph[s-1][i]==d) {
                return true;
            }
            if(visited[graph[s-1][i]-1] == false){
                traversal.push(graph[s-1][i]);
                visited[graph[s-1][i]-1] = true;
            }
        }
    }
    
    return false;
}

void solve() {
    ll n, s, d;
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

    cin >> s >> d;

    if(isPathBFS(graph, n, s, d)){
        cout << "Yes, Path exists.";
    }else{
        cout << "No, Path doesn't exists.";
    }

}

int main() {
    // Setting up Input/ Output
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // Driver Code
    ll t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
