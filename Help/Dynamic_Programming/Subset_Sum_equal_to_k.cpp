#include <bits/stdc++.h> 
bool subsetSumToK(int n, int k, vector<int> &a) {
    vector<vector<bool>>dp(n,vector<bool>(k+1,false));
    for(int i=0;i<n;i++)
    {
        dp[i][0]=true;
    }
    dp[0][a[0]]=true;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            bool pick=false;
            bool non_pick=dp[i-1][j];
            if(j>=a[i])
            {
                pick=dp[i-1][j-a[i]];    
            }
            dp[i][j]=pick||non_pick;
        }
    }
    return dp[n-1][k];
}
