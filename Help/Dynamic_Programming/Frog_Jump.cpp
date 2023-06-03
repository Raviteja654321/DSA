#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    vector<int>h(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    vector<int>dp(n+1,0);
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1]+abs(h[i]-h[i-1]);
        if(i>=2)
        {
            dp[i]=min(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
        }
    }
    cout<< dp[n-1]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt=1;
    while(tt--)
    {
        solve();
    }
}
