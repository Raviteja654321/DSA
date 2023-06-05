int ninjaTraining(int n, vector<vector<int>> &a)
{
    vector<vector<int>>dp(n,vector<int>(3,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0)
            {
                dp[i][j]=a[i][j];
                continue;
            }
            else 
            {
                if(j==0)
                {
                    dp[i][j]=max(a[i][j]+dp[i-1][j+1],a[i][j]+dp[i-1][j+2]);
                }
                else if(j==1)
                {
                    dp[i][j]=max(a[i][j]+dp[i-1][j+1],a[i][j]+dp[i-1][j-1]);
                }
                else 
                {
                    dp[i][j]=max(a[i][j]+dp[i-1][j-1],a[i][j]+dp[i-1][j-2]);
                }
            }
        }
    }
    return max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
}
