class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> a) 
    {
        int n=a.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int i_=0;
            for(int j=i;j>=0 && i_<n;j--,i_++)
            {
                ans.push_back(a[i_][j]);
            }
        }
        for(int i=1;i<n;i++)
        {
            int i_=i;
            for(int j=n-1;j>=0 && i_<n;j-- && i_++)
            {
                ans.push_back(a[i_][j]);
            }
        }
        return ans;
    }
};
