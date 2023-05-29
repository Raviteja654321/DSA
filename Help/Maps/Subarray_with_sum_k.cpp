// Array might contain elements with negative values
class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n=a.size();
        int ans=0;
        vector<int>pre(n);
        map<int,vector<int>>mp;
        mp[0].push_back(0);
        pre[0]=a[0];
        if(mp.find(pre[0]-k)!=mp.end())
        {
            ans+=mp[pre[0]-k].size();
        }
        mp[pre[0]].push_back(0);
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+a[i];
            if(mp.find(pre[i]-k)!=mp.end())
            {
                ans+=mp[pre[i]-k].size();
            }
            mp[pre[i]].push_back(i);
        }
        return ans;
    }
};
