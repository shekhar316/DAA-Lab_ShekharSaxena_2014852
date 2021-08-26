// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 05
// Problem: Common Elements in Sorted Arrays
// Description: Mentioned in README.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void find_common_elements(ll arr1[], ll m, ll arr2[], ll n){
    ll i = 0, j = 0;
    vector <ll> answer;
    while(i < m && j < n){
        if(arr1[i] == arr2[j]){
            answer.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i] < arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    for(ll i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }
    cout << "\n";
}

void solve() {
    ll m, n;
    cin >> m;
    ll arr1[m];
    for (ll i = 0; i < m; i++){
        cin >> arr1[i];
    }
    cin >> n;
    ll arr2[n];
    for (ll i = 0; i < n; i++){
        cin >> arr2[i];
    }
    find_common_elements(arr1, m, arr2, n);
}

int main() {
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