class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                }
            }
        }
        int maxi=0;
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int x=it.first.first;
            int y=it.first.second;
            int t=it.second;
            maxi=max(maxi,t);
            vector<int>x_cor={-1,0,+1,0};
            vector<int>y_cor={0,+1,0,-1};
            for(int i=0;i<4;i++)
            {
                // for(int j=0;j<4;j++)
                int j=i;
                {
                    if(x+x_cor[i]>=0 && x+x_cor[i]<n && y+y_cor[j]>=0 && y+y_cor[j]<m && grid[x+x_cor[i]][y+y_cor[j]]==1)
                    {
                        q.push({{x+x_cor[i],y+y_cor[j]},t+1});
                        grid[x+x_cor[i]][y+y_cor[j]]=2; 
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return maxi;
    }
};
