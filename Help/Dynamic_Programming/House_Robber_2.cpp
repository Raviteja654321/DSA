//consider 1,2,3 ... n then 
//either 1 to n-1 or 2 to n (as adjcent can never be the case so break;)
class Solution {
public:
    int rob(vector<int>& a) {
        int n=a.size();
        if(n==1)
        {
            return a[0];
        }
        vector<int>dp1(n+1,0);
        for(int i=1;i<n;i++)
        {
            dp1[i]=a[i];
            if(i>=2)
            {
                dp1[i]=max(dp1[i],a[i]+dp1[i-2]);
            }
            if(i>=3)
            {
                dp1[i]=max(dp1[i],a[i]+dp1[i-3]);
            }
        }
        vector<int>dp2(n+1,0);
        for(int i=0;i<n-1;i++)
        {
            dp2[i]=a[i];
            if(i>=2)
            {
                dp2[i]=max(dp2[i],a[i]+dp2[i-2]);
            }
            if(i>=3)
            {
                dp2[i]=max(dp2[i],a[i]+dp2[i-3]);
            }
        }
        dp1[n]=dp1[n-1];
        if(n>=2)
        {
            dp1[n]=max(dp1[n-1],dp1[n-2]);
        }
        dp2[n]=dp2[n-2];
        if(n>=3)
        {
            dp2[n]=max(dp2[n-2],dp2[n-3]);
        }
        return max(dp1[n],dp2[n]);
    }
};
