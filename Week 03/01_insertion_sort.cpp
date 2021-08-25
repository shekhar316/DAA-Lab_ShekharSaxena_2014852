// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 03
// Problem: Insertion Sort
// Description: Mentioned in README.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void insertion_sort(ll arr[], ll size, ll* comparisions, ll* shifts){
    ll key;
    for (ll i = 1; i < size; i++){
        key = arr[i];
        ll j = i - 1;
        while (j >= 0 && arr[j] > key){
            *comparisions = *comparisions + 1;
            *shifts = *shifts + 1;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        *shifts = *shifts + 1;
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
    ll comparisions = 0, shifts = 0;
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    insertion_sort(arr, size, &comparisions, &shifts);
    print_array(arr, size);
    cout << "Comparisions: " << comparisions << "\n";
    cout << "Shifts: " << shifts << "\n";
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