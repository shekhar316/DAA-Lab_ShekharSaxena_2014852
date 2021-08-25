// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 04
// Problem: Quick Sort
// Description: Mentioned in README.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void swap(ll *x, ll *y) {
   ll temp;
   temp = *x;
   *x = *y;
   *y = temp;
}

ll partition(ll arr[], ll left, ll right, ll* comparisions, ll* swaps) {
    ll pivot, index;
    index = left;
    pivot = right;
    for(ll i = left; i < right; i++) {
        if(arr[i] < arr[pivot]) {
            swap(&arr[i], &arr[index]);
            *swaps = *swaps + 1;
            index++;
        }
        *comparisions = *comparisions + 1;
    }
    swap(&arr[pivot], &arr[index]);
    *swaps = *swaps + 1;
    return index;
}

ll random_pivot_partition(ll arr[], ll left, ll right, ll* comparisions, ll* swaps) {
    ll pvt, n, temp;
     n = rand();
    pvt = left + n % (right - left + 1);
    swap(&arr[right], &arr[pvt]);
    return partition(arr, left, right, comparisions, swaps);
}

void quick_sort(ll arr[], ll left, ll right, ll* comparisions, ll* swaps) {
    if(left < right) {
        // ll pindex = partition(arr, left, right, comparisions, swaps);
        ll pindex = random_pivot_partition(arr, left, right, comparisions, swaps);
        quick_sort(arr, left, pindex-1, comparisions, swaps);
        quick_sort(arr, pindex+1, right, comparisions, swaps);
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
    quick_sort(arr, 0, size-1, &comparisions, &swaps);
    print_array(arr, size-1);
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