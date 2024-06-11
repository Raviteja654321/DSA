class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(auto it:arr1)
        {
            mp[it]++;
        }
        vector<int>ans;
        for(auto it:arr2)
        {
            while(mp[it]>0)
            {
                ans.push_back(it);
                mp[it]--;
            }
        }
        for(auto it:mp)
        {
            cout<<it.first<<" "<<it.second<<endl;
            while((it.second)--)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
