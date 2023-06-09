class Solution {
public:
    bool canPartition(vector<int>& a) {
        int n=a.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        if(sum%2)
        {
            return false;
        }
        vector<vector<bool>>dp(n,vector<bool>(sum/2+1,0));
        for(int i=0;i<n;i++)
        {
            dp[i][0]=true;
        }
        if(a[0]<=sum/2)
        {
            dp[0][a[0]]=true;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=sum/2;j++)
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
        return dp[n-1][sum/2];
    }
};
