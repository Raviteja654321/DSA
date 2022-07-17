//https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>>ans;
        vector<int>one(1,1);
        if(n==1)
        {
            ans.push_back(one);
            return ans;
        }
        vector<int>two(2,1);
        ans.push_back(one);
        ans.push_back(two);
        for(int i=3;i<=n;i++)
        {
            vector<int>a(i,1);
            for(int j=1;j<i-1;j++)
            {
                a[j]=ans[i-2][j-1]+ans[i-2][j];
            }
            ans.push_back(a);
        }
        return ans;
    }
};
