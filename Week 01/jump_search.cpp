// Shekhar Saxena
// Section: A
// Class Roll No: 49
// Week 01
// Problem: jump_search
// Description: Mentioned in Problem_Description.md

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void jump_search(ll arr[], ll size, ll key)
{
    ll comparisons = 0;
    ll index = -1;
    ll blockSize = sqrt(size);
    ll right = blockSize;
    ll left = 0;

    while (arr[right] <= key && right < size)
    {
        comparisons++;
        left = right;
        right = right + blockSize;
        if (right > size - 1)
            right = size;
    }

    for (int i = left; i < right; i++){
        if (arr[i] == key){
            comparisons++;
            cout << "Present " << comparisons << endl;
            index = i;
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

    jump_search(arr, size, key);
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
