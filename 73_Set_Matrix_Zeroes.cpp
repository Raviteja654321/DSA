//https://leetcode.com/problems/set-matrix-zeroes/
//coding ninjas
class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int rows=a.size();
        int cols=a[0].size();
        vector<int>row(rows+1,-1);
        vector<int>col(cols+1,-1);
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(a[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
        for(int i=0;i<rows;i++) 
        {
            for(int j=0;j<cols;j++) 
            {
                 if(row[i]==0 || col[j]==0) 
                 {
                     a[i][j] = 0;
                 }
            }
        }
    }
};
