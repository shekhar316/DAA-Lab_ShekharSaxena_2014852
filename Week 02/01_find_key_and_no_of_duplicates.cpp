// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 02
// Problem: find key and its duplicates
// Description: Mentioned in README.md


#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll first_occurrence(ll arr[], ll left, ll right, ll key, ll size){
    if (right >= left) {
        ll mid = left + (right - left) / 2;
        if ((mid == 0 || key > arr[mid - 1]) && arr[mid] == key){
            return mid;
        }
        else if (key > arr[mid]){
            return first_occurrence(arr, (mid + 1), right, key, size);
        }  
        else{
            return first_occurrence(arr, left, (mid - 1), key, size);
        }
    }
    return -1;
}

ll last_occurrence(ll arr[], ll left, ll right, ll key, ll size){
    if (right >= left) {
        ll mid = left + (right - left) / 2;
        if ((mid == size-1 || key < arr[mid + 1]) && arr[mid] == key){
            return mid;
        }
        else if (key < arr[mid]){
            return last_occurrence(arr, left, (mid - 1), key, size);
        }  
        else{
            return last_occurrence(arr, (mid + 1), right, key, size);
        }
    }
    return -1;
}

void solve(){
    ll size, key;
    cin >> size;
    ll arr[size];
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }
    cin >> key;
    ll first = first_occurrence(arr, 0, size -1 , key, size);
    ll last = last_occurrence(arr, 0, size -1 , key, size);

    if(first == -1 && last == -1){
        cout << "Key Not Present.\n";
    }else{
        cout << key << " - "<< last - first + 1  << "\n";
    }
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