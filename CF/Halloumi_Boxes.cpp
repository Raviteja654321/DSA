//https://codeforces.com/problemset/problem/1903/A

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(k==1)
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout<<"YES"<<endl;
    return ;
}
int  main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    int tt=1;
    cin>>tt;
    while(tt--)
    {
         solve();   
    }
}
