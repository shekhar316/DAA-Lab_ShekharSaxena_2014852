// Shekhar Saxena
// Section: A
// Class Roll No: 49
// Week 01
// Problem: binary_search
// Description: Mentioned in Problem_Description.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void binary_search(ll arr[], ll left, ll right, ll key){
    ll comparisons = 0;
    ll index = -1;
    ll mid;

    while (right >= left){
        mid = (left + right) / 2;

        if (arr[mid] < key){
            left = mid + 1;
            comparisons++;
        }

        if (arr[mid] > key){
            right = mid - 1;
            comparisons++;
        }

        if (arr[mid] == key){
            comparisons++;
            index = mid;
            cout << "Present " << comparisons << endl;
            return;
        }
    }

    cout << "Not Present " << comparisons << endl;
}

void solve()
{
    ll size, key;
    cin >> size;
    ll arr[size];
    for (ll i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> key;

    binary_search(arr, 0, size - 1, key);
}

int main()
{
// Setting up Input/ Output
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Driver Code
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}