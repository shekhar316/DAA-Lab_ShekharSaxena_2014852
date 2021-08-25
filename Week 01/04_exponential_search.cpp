// Shekhar Saxena
// Section: A
// Class Roll No: 49
// Week 01
// Problem: exponential search
// Description: Mentioned in Problem_Description.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void binary_search(ll arr[], ll left, ll right, ll key, ll* comparisions){
    ll index = -1;
    ll mid;

    while (right >= left){
        mid = (left + right) / 2;

        if (arr[mid] < key){
            left = mid + 1;
            *comparisions = *comparisions + 1;
        }

        if (arr[mid] > key){
            right = mid - 1;
            *comparisions = *comparisions + 1;
        }

        if (arr[mid] == key){
            *comparisions = *comparisions + 1;
            index = mid;
            cout << "Present " << *comparisions << endl;
            return;
        }
    }

    cout << "Not Present " << *comparisions << endl;
}


void exponetial_search(ll arr[], ll size, ll key){
    ll comparisions = 0;
    if (arr[0] == key){
        comparisions++;
        cout << "Present " << comparisions << endl;
        return;
    }
    comparisions++;
    ll i = 1;
    while (i < size && arr[i] <= key){
        comparisions++;
        i = i * 2;
    }
    return binary_search(arr, i/2, min(i, size-1), key, &comparisions);
}

void solve(){
    ll size, key;
    cin >> size;
    ll arr[size];
    for (ll i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    exponetial_search(arr, size, key);
}

int main(){
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