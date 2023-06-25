class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int a[MAX][MAX],int row,int col)
    {
        vector<vector<int>>ans;
        map<vector<int>,int>mp;
        for(int i=0;i<row;i++)
        {
            vector<int>temp;
            for(int j=0;j<col;j++)
            {
                temp.push_back(a[i][j]);
            }
            if(mp.find(temp)==mp.end())
            {
                mp[temp]++;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
