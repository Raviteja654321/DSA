class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        vector<int> prime(n+1,-1);
        prime[0]=0;
        prime[1]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    prime[i]=j;
                    break;
                }
            }
        }
        return prime;
    }
};
