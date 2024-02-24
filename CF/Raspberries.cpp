//https://codeforces.com/problemset/problem/1883/C

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
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,k-(a[i]%k));
        if(a[i]%k ==0 ) mini=0;
    }
    vector<int>arr;
    if(k==4 && n>1)
    {
        for(int i=0;i<n;i++)
        {
            arr.push_back(a[i]%2);
        }
        sort(arr.begin(),arr.end());
        mini=min(mini,arr[0]+arr[1]);
    }
    cout<<mini<<endl;
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
