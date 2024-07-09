class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& a) {
        double ans=0;
        int n=a.size(),curr=1;
        for(int i=0;i<n;i++)
        {
            if(a[i][0]<=curr)curr+=a[i][1];
            else curr=a[i][0]+a[i][1];
            ans+=(curr-a[i][0]);
        }
        return ans/n;
    }
};
