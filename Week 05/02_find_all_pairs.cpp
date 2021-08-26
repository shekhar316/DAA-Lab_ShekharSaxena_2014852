// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 05
// Problem: Find pairs 
// Description: Mentioned in Problem_Description.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void find_pairs(ll arr[], ll size, ll key){
    // cout << "Check 01\n";
    ll left = 0;
    ll right = size - 1;
    vector < pair <ll,ll> > answer;
    sort(arr, arr + size);

    while(left < right){
        if(arr[left] + arr[right] == key){
            answer.push_back(make_pair(arr[left], arr[right]));
            right--;
        }else if(arr[left] + arr[right] < key){
            left++;
        }else{
            right--;
        }
    }
    if(answer.size() > 0){
        for (ll i = 0; i < answer.size(); i++){
            cout << answer[i].first << " " << answer[i].second << ", ";
        }
    }else{
        cout << "No Such Pair Exist.";
    }
    cout << "\n";
}

void solve() {
    ll size, key;
    cin >> size;
    ll arr[size];
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    cin >> key;
    find_pairs(arr, size, key);

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