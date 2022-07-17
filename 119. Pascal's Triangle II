//https://leetcode.com/problems/pascals-triangle-ii/
class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<vector<int>>ans;
        vector<int>one(1,1);
        if(rowIndex==0)
        {
            return one;
        }
        vector<int>two(2,1);
        ans.push_back(one);
        ans.push_back(two);
        if(rowIndex==1)
        {
            return two;
        }
        vector<int>final;
        for(int i=3;i<=rowIndex+1;i++)
        {
            vector<int>a(i,1);
            for(int j=1;j<i-1;j++)
            {
                a[j]=ans[i-2][j-1]+ans[i-2][j];
            }
            if(i==rowIndex+1)
            {
                final=a;
            }
            ans.push_back(a);
        }
        return final;    
    }
};
