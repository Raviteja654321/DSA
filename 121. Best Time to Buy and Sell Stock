//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>&a) {
        int n=a.size();
        int maxi=-1;
        vector<int>max(n);
        for(int i=n-1;i>=0;i--)
        {
            if(maxi<a[i])
            {
                maxi=a[i];
            }
            max[i]=maxi;
        }
        vector<int>diff(n);
        int diffmaxx=-1;
        for(int i=0;i<n;i++)
        {
            diff[i]=abs(a[i]-max[i]);
            if(diffmaxx<diff[i])
            {
                diffmaxx=diff[i];
            }
        }
        return diffmaxx;
    }
};
