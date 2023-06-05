class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& a) {
        int n=a.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++)
        {
            dp[0][i]=a[0][i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                dp[i][j]=a[i][j]+dp[i-1][j];
                if(j>=1)
                {
                    dp[i][j]=min(dp[i][j],dp[i-1][j-1]+a[i][j]);
                }
                if(j<=n-2)
                {
                    dp[i][j]=min(dp[i][j],dp[i-1][j+1]+a[i][j]);
                }
            }
        }
        int mini=dp[n-1][0];
        for(int i=1;i<n;i++)
        {
            mini=min(mini,dp[n-1][i]);
        }
        return mini;
    }
};
