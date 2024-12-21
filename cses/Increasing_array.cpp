#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mx = 0;
    long long ans = 0;
    for(int i=0;i<n ;i++)
    {
        int a;
        cin>>a;
        mx = max(a,mx);
        ans += mx-a;
    }
    cout<<ans;
    return 0;

}