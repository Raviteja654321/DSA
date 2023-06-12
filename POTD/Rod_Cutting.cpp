class Solution{
  public:
    int cutRod(int a[], int n) {
        vector<int>dp(n,0);
        dp[0]=a[0];
        for(int i=1;i<n;i++)
        {
            dp[i]=a[i];
            for(int j=0;j<i;j++)
            {
                dp[i]=max(dp[i],dp[j]+a[i-j-1]);
            }
        }
        return dp[n-1];
    }
};
