class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        int now=1;
        int count=1;
        while(i<n)
        {
            if(nums[i]==nums[now-1])
            {
                i++;
            }
            else 
            {
                nums[now]=nums[i];
                now++;
                i++;
            }
        }
        return now;
    }
};
