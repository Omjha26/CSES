#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, sum = 0;
    cin >> n;
    for (ll i = 1; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
    }
    ll missing = (n * (n + 1) / 2) - sum;
    cout << missing << endl;
    return 0;
}
