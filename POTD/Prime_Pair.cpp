class Solution {
    public:
    bool isPrime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(!(n%i))
            return 0;
        }
        return 1;
    }
    vector<int> getPrimes(int n) {
        for(int i=2;i<=(n/2);i++)
        {
            if(isPrime(i) and isPrime(n-i))
            return {i,n-i};
        }
        return {-1,-1};
    }
};
