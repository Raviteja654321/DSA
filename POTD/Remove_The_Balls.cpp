class Solution {
  public:
    int finLength(int n, vector<int> color, vector<int> radius) {
        stack<int>colst;
        stack<int>radst;
        for(int i=0;i<n;i++)
        {
            if(colst.empty())
            {
                colst.push(color[i]);
                radst.push(radius[i]);
            }
            else if(colst.top()==color[i] && radst.top()==radius[i])
            {
                while(!colst.empty() && colst.top()==color[i] && radst.top()==radius[i])
                {
                    colst.pop();
                    radst.pop();
                }
            }
            else 
            {
                colst.push(color[i]);
                radst.push(radius[i]);
            }
        }
        return colst.size();
    }
};
