class Solution {
  public:
    int unvisitedLeaves(int n, int leaves, int a[]) {
        vector<int>visited(leaves+1,0);
        for(int i=0;i<n;i++)
        {
            int step=a[i];
            if(step<=leaves && !visited[step])
            {
                for(int j=step;j<=leaves;j+=step)
                {
                    visited[j]=1;
                }    
            }
        }
        int count=0;
        for(int i=1;i<=leaves;i++)
        {
            if(!visited[i])
            {
                count++;
            }
        }
        return count;
    }
};
