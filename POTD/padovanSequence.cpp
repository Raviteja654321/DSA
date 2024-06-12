class Solution
{
    public:
    int mod = (1e9+7);
    int padovanSequence(int n)
    {
        if(n==0 || n==1 || n==2)
        {
            return 1;
        }
        int prev1 = 1,prev2 = 1,prev3 = 1;
        int curr;
        for(int i=3;i<=n;i++)
        {
            curr = (prev1+prev2)%mod;
            prev1=prev2;
            prev2=prev3;
            prev3=curr;
        }
        return curr;
    }
};
