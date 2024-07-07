class Solution {
public:
    int helper(int num,int exc)
    {
        int ans=0,remain=num;
        while(remain>=exc)
        {
            ans+=remain/exc;
            remain= remain%exc + remain/exc;
        }
        return ans;
    }
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        ans+=helper(numBottles,numExchange);
        return ans;
    }
};
