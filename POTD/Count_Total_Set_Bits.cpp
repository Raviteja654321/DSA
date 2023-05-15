class Solution {
  public:
    long long countBits(long long N) {
        long long int sum=0;
        for(int i=1;i<=N;i++)
        {
            sum+=__builtin_popcount(i);
        }
        return sum;
    }
};
