class Solution {
public:
    int minimumTotal(vector<vector<int>>& a) {
        int n=a.size();
        vector<vector<int>>dp(n,vector<int>(n,1e8));
        dp[0][0]=a[0][0];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j>=1)
                {
                    dp[i][j]=min(dp[i][j],dp[i-1][j-1]+a[i][j]);
                }
                dp[i][j]=min(dp[i][j],dp[i-1][j]+a[i][j]);
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
