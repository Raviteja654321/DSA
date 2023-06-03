class Solution {
  public:
	void shortest_distance(vector<vector<int>>&a){
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==-1)
                {
                    a[i][j]=1e9;
                }
            }
        }
        
        for(int via=0;via<n;via++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    a[i][j]=min(a[i][j],a[i][via]+a[via][j]);
                }
            }
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==1e9)
                {
                    a[i][j]=-1;
                }
            }
        }
	}
};
