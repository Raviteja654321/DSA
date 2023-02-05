class Solution {
public:
    void comb(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&pb)
    {
        if(ind==arr.size())
        {
            if(target==0)
            {
                ans.push_back(pb);
            }
            return ;
        }
        if(arr[ind]<=target)
        {
            pb.push_back(arr[ind]);
            comb(ind,target-arr[ind],arr,ans,pb);
            pb.pop_back();
        }
        comb(ind+1,target,arr,ans,pb);
    }
    vector<vector<int>> combinationSum(vector<int>& cand, int target) 
    {
        vector<vector<int>>ans;
        vector<int>pb;
        comb(0,target,cand,ans,pb);
        return ans;
    }
};
