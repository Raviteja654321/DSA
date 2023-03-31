class Solution {
  public:
    long long int minOperations(int n) {
        long long int ans;
        if(n%2)
        {
            ans=(long long int)1LL*((long long )n*(long long )n-1);
        }
        else 
        {
            ans=1LL*n*n;
        }
        return ans/4;
    }
};
