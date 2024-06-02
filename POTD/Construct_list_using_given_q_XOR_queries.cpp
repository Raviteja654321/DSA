class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &que) {
        vector<int>ans;
        int x=0;
        for(int i=q-1;i>=0;i--)
        {
            if(que[i][0]==1)
            {
                x^=que[i][1];
            }
            else 
            {
                ans.push_back(que[i][1]^x);
            }
        }
        ans.push_back(x);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
