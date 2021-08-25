// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 04
// Problem: Sort an array by dividing into subarrays and joining sorted subarrays
// Description: Mentioned in README.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void merge(ll arr[], ll left, ll m, ll right, ll* comparisions, ll* inversions) {
    ll nl, nr;
    nl = m - left + 1; 
    nr = right -m;
    ll leftArr[nl], rightArr[nr];
    for(ll i = 0; i < nl; i++){
       leftArr[i] = arr[left + i];
    }
    for(ll j = 0; j < nr; j++){
       rightArr[j] = arr[m + 1 + j];
    } 

    ll i = 0, j = 0, k = left;

    while(i < nl && j<nr) {
        if(leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }else{
            arr[k] = rightArr[j];
            j++;
            *inversions = *inversions + (nl - i);
        }
        *comparisions = *comparisions + 1;
        k++;
    }

    while(i < nl) {   
        arr[k] = leftArr[i];
        i++; k++;
    }
    while(j < nr) {     
        arr[k] = rightArr[j];
        j++; k++;
    }
}

void merge_sort(ll arr[], ll left, ll right, ll* comparisions, ll* inversions) {
   if(left < right) {
      int m = left + (right -left)/2;
      merge_sort(arr, left, m, comparisions, inversions);
      merge_sort(arr, m + 1, right, comparisions, inversions);
      merge(arr, left, m, right, comparisions, inversions);
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
    ll comparisions = 0, inversions =0;
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    merge_sort(arr, 0, size - 1, &comparisions, &inversions);
    print_array(arr, size);
    cout << "Comparisions: " << comparisions << "\n";
    cout << "Inversions: " << inversions << "\n";
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