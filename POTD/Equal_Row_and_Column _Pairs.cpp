class Solution {
public:
    int equalPairs(vector<vector<int>>& a) {
        int ans=0;
        map<vector<int>,int>mp;
        int n=a.size();
        for(int i=0;i<n;i++)
        {   
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                temp.push_back(a[j][i]);
            }
            ans+=mp[temp];
        }
        return ans;
    }
};
