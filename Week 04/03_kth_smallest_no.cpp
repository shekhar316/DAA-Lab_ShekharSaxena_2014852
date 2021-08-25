// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 04
// Problem: Find kth smallest or greatest number
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

ll partition(ll arr[], ll left, ll right) {
    ll pivot, index;
    index = left;
    pivot = right;
    for(ll i = left; i < right; i++) {
        if(arr[i] < arr[pivot]) {
            swap(&arr[i], &arr[index]);
            index++;
        }
    }
    swap(&arr[pivot], &arr[index]);
    return index;
}

ll kth_smallest(ll arr[], ll left, ll right, ll k){
    if (k > 0 && k <= right - left + 1) {
        ll position = partition(arr, left , right);
        if (position - left == k - 1){
            return arr[position];
        }
        if (position - left > k - 1){
            return kth_smallest(arr, left, position - 1, k);
        }
        return kth_smallest(arr, position + 1, right, k - position + left - 1);
    }
    return INT_MAX;
}




void solve() {
    ll size, k;
    cin >> size;
    ll arr[size];
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    cin >> k;
    ll result = kth_smallest(arr, 0, size-1, k);
    if(result != INT_MAX){
        cout << result << "\n";
    }else{
        cout << "Not Present";
    }
    
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