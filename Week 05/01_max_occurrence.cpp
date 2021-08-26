// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 05
// Problem: Maximum Occurrence of Alphabets
// Description: Mentioned in Problem_Description.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void max_occurrence(char arr[], ll size){
    ll frequency[26] = {0};
    ll max_freq = -1;
    ll max_freq_index = -1;
    for(ll i = 0; i < size; i++){
        frequency[arr[i] - 'a']++;
    }
    for(ll i = 0; i < size; i++){
        if(max_freq < frequency[i]){
            if (max_freq_index < i){
                max_freq = frequency[i];
                max_freq_index = i;
            }
        }
    }
    if(max_freq > 1){
        char res = 97 + max_freq_index;
        cout << res << " -> " << max_freq << "\n";
    }else{
        cout << "No Duplicates Found\n";
    }
}

void solve() {
    ll size;
    cin >> size;
    char arr[size];
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    max_occurrence(arr, size);

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