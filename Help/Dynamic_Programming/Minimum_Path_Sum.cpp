class Solution {
public:
    int minPathSum(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
        dp[0][0]=a[0][0];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i>=1)
                {
                    // cout<<"i>=1"<<endl;;
                    dp[i][j]=min(dp[i-1][j]+a[i][j],dp[i][j]);
                }
                if(j>=1)
                {
                    // cout<<" j>=1 "<<endl;;
                    dp[i][j]=min(dp[i][j-1]+a[i][j],dp[i][j]);
                }
                // cout<<dp[i][j]<<" ";
            }
            // cout<<endl;
        }
        return dp[n-1][m-1];
    }
};
