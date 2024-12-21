#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    cin>>str;
    char ch ='A';
    
    int ans = 1,count = 0;
    for(char d : str)
    {
        if(d==ch)
        {
            ++count;
            ans = max(count,ans);
        }
        else {
            ch = d;
            count = 1;
        }
    }
    cout<<ans;
    return 0;
}