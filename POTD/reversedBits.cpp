class Solution {
  public:
    long long reversedBits(long long x) {
        long long ans=0;
        int n=32;
        while(n--)
        {
            ans=2*ans+x%2;
            x/=2;
        }
        return ans;
    }
};
