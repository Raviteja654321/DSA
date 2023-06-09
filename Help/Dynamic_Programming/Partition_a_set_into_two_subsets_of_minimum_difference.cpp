#include <bits/stdc++.h> 
int minSubsetSumDifference(vector<int>& a, int n)
{
	// int n=a.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        vector<vector<bool>>dp(n,vector<bool>(sum+1,0));
        for(int i=0;i<n;i++)
        {
            dp[i][0]=true;
        }
        dp[0][a[0]]=true;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=sum;j++)
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
        int mini=sum;
        for(int i=0;i<=sum;i++)
        {
            if(dp[n-1][i])
            {
                mini=min(mini,abs(i-(sum-i)));
            }
        }
        return mini;
}
