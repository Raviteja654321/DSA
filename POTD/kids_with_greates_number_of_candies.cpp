class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        int n=candies.size();
        vector<bool>ans(n,false);
        int maxi=candies[0];
        for(int i=1;i<n;i++)
        {
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extra>=maxi)
            {
                ans[i]=true;
            }
        }
        return ans;
    }
};
