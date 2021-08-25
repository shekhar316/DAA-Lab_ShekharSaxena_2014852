// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 02
// Problem: find three indices i j k 
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

void solve(){
    ll size;
    cin >> size;
    ll arr[size];
    for(ll i = 0; i < size; i++){
        cin >> arr[i];
    }

    ll iIndex = -1, jIndex = -1, kIndex = -1;
    ll flag = -1;

    for(ll i = 0; i < size; i++){
        for(ll j = i + 1; j < size; j++){
            // cout << "FOR j = " << j << "\n";
            ll sum = arr[i] + arr[j];
            ll k = binary_search(arr, 0, size-1, sum);
            if(k != -1){
                iIndex = i+1;
                jIndex = j+1;
                kIndex = k+1;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }

    if(iIndex != -1){
        cout << iIndex << ", " << jIndex << ", " << kIndex << "\n";
    }else{
        cout << "No sequence found!" << "\n";
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