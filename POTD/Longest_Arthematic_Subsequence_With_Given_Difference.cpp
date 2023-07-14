class Solution {
public:
    int longestSubsequence(vector<int>&a, int diff) {
        unordered_map<int,int>mp;
        int ans=1;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            mp[a[i]]=1+mp[a[i]-diff];
            ans=max(ans,mp[a[i]]);
        }
        return ans;
    }
};
