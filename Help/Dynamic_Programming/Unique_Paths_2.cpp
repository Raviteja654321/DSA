class Solution {

public:
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        dp[0][0]=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==1)
                {
                    dp[i][j]=0;
                    continue;
                }
                if(i>=1)
                {
                    dp[i][j]+=dp[i-1][j];
                }
                if(j>=1)
                {
                    dp[i][j]+=dp[i][j-1];
                }
            }
        }
        return dp[m-1][n-1];
    }
};
