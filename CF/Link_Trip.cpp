//https://codeforces.com/problemset/problem/1901/A

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
    int mini=max(a[0],2*(k-a[n-1]));
    for(int i=1;i<n;i++)
    {
        mini=max(mini,a[i]-a[i-1]);
    }
    cout<<mini<<endl;
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
