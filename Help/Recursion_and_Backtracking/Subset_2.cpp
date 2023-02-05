class Solution {
public:
    set<vector<int>>s;
    void recur(int i,vector<int>&a,vector<int>temp)
    {
        int n=a.size();
        sort(temp.begin(),temp.end());
        if(i>=n)
        {
            s.insert(temp);
            return ;
        }
        recur(i+1,a,temp);
        temp.push_back(a[i]);
        recur(i+1,a,temp);
        return ;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        vector<vector<int>>ans;
        vector<int>temp;
        recur(0,a,temp);
        auto it=s.begin();
        while(it!=s.end())
        {
            ans.push_back(*it);
            it++;
        }
        return ans;
    }
};
