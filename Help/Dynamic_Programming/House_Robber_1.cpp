class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *a, int n) {
	    vector<int>dp(n,0);
	    for(int i=0;i<n;i++)
	    {
	        dp[i]=a[i];
	        if(i>=2)
	        {
	            dp[i]=max(dp[i],a[i]+dp[i-2]);
	        }
	        if(i>=3)
	        {
	            dp[i]=max(dp[i],a[i]+dp[i-3]);
	        }
	    }
	    if(n==1)
	    {
	        return a[0];
	    }
	    return max(dp[n-1],dp[n-2]);
	}
};
