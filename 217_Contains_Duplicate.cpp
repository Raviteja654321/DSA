//https:leetcode.com/problems/contains-duplicate/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(auto s:nums)
        {
            if(mp[s]==0)
            {
                mp[s]++;
            }
            else 
            {
                return true; 
            }
        }
        return false;
    }
};
