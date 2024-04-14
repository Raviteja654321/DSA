class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        vector<bool>isprime(101,1);
        isprime[0]=isprime[1]=false;
        for(int i=2;i*i<=101;i++)
        {
            if(isprime[i])
            {
                for(int j=2*i;j<101;j+=i)
                {
                    isprime[j]=false;
                }
            }
        }
        int n=nums.size();
        deque<int>dq;
        for(int i=0;i<n;i++)
        {
            if(isprime[nums[i]])
            {
                dq.push_back(i);
            }
        }
        return dq.back()-dq.front();
    }
};
