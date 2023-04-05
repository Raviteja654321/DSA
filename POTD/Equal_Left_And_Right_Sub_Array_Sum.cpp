class Solution {
  public:
    int equalSum(int n, vector<int> &a) {
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        long long int check=0;
        for(int i=0;i<n;i++)
        {
            
            if((sum-a[i])%2==0 &&  check==(sum-a[i])/2)
            {
                return i+1;
            }
            check+=a[i];
        }
        return -1;
    }
};
