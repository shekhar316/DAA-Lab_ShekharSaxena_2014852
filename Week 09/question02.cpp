// Shekhar Saxena
// Section: A
// Class Roll No: 49
// University Roll No: 2014852
#include <bits/stdc++.h>
using namespace std;
#define INF 9999999
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<double> items(n);
    vector<double> val(n);
    vector<vector<double>> job; //to store pair of
    for (int i = 0; i < n; i++)
    {
        cin >> items[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        job.push_back({val[i] / items[i], items[i], i + 1});
    }
    double k;
    cin >> k;
    sort(job.rbegin(), job.rend()); //sort acc to val per wt
    vector<pair<double, double>> ls;
    float profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (job[i][1] >= k)
        {
            profit += k * job[i][0];
            ls.push_back(make_pair(k, job[i][2]));
            break;
        }
        else
        {
            profit += job[i][1] * job[i][0];
        }
        ls.push_back(make_pair(job[i][1], job[i][2]));
        k = k - job[i][1];
    }
    cout << "Maximum Value is: " << profit << endl;
    cout << "Item - Weight" << endl;
    for (auto it : ls)
        cout << it.first << " - " << it.second << endl;
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
