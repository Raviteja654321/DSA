class Solution {
public:
    int jump(vector<int>& a) {
        int n=a.size();
        vector<int>dp(n,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n && j<=i+a[i];j++)
            {
                dp[j]=min(dp[j],dp[i]+1);
            }
        }
        return dp[n-1];
    }
};
