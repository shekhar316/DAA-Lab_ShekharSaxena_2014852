// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
// Subject: Week 10 Q3
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    i = 0;
    sort(a, a + n);
    int maxcount = 0;
    while (i < n)
    {
        int j = i;
        int count = 1;
        while (a[j] == a[j + 1])
        {
            count++;
            j++;
        }
        if (count > maxcount)
            maxcount = count;
        i = j + 1;
    }
    if (maxcount > n / 2)
        cout << "YES\n";
    else
        cout << "NO\n";
    if (n % 2 != 0)
        cout << a[(n / 2)];
    else
        cout << (a[(n - 1) / 2] + a[n / 2]) / 2.0;
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
