// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 03
// Problem: Selection Sort
// Description: Mentioned in README.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void selection_sort(ll arr[], ll size, ll* comparisions, ll* swaps){
    ll minIndex;
    for (ll i = 0; i < size - 1; i++){
        minIndex = i;
        for (ll j = i + 1; j < size; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
            *comparisions = *comparisions + 1;
        }
        ll temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        *swaps = *swaps + 1;
    }
}

void print_array(ll arr[], ll size){
    for(ll i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void solve() {
    ll size;
    cin >> size;
    ll arr[size];
    ll comparisions = 0, swaps = 0;
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    selection_sort(arr, size, &comparisions, &swaps);
    print_array(arr, size);
    cout << "Comparisions: " << comparisions << "\n";
    cout << "Swaps: " << swaps << "\n";
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