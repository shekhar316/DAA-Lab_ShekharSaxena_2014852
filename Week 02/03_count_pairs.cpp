// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 02
// Problem: count pairs 
// Description: Mentioned in README.md

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll binary_search(ll arr[], ll left, ll right, ll key){
    ll mid;

    while (right >= left){
        mid = (left + right) / 2;

        if (arr[mid] < key){
            left = mid + 1;
        }

        if (arr[mid] > key){
            right = mid - 1;
        }

        if (arr[mid] == key){
            return mid;
        }
    }
    return -1;
}

ll remove_duplicates(ll arr[], ll size){
    if (size == 0 || size == 1){
        return size;
    }

    ll j = 0;
 
    for (ll i = 0; i < size-1; i++){
        if (arr[i] != arr[i+1]){
            arr[j++] = arr[i];
        }
    } 
 
    arr[j++] = arr[size-1];
 
    return j;
}


void solve(){
    ll size, key;
    cin >> size;
    ll arr[size];
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    cin >> key;
    ll count = 0;
    sort(arr, arr + size);
    size = remove_duplicates(arr, size);
    //counting pairs
    for (ll i = 0; i < size-1; i++){
        ll found = binary_search(arr, i+1, size-1, arr[i] + key);
        if (found != -1){
            count++;
        }
    }

    cout << count << endl;

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}