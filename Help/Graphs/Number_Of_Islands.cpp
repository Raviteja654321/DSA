class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    // cout<<i<<" "<<j<<endl;
                    count++;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    while(!q.empty())
                    {
                        int x=q.front().first;
                        int y=q.front().second;
                        grid[x][y]='0';
                        q.pop();
                        vector<int>x_cor={-1,0,+1,0};
                        vector<int>y_cor={0,-1,0,+1};
                        for(int k=0;k<4;k++)
                        {
                            if(x+x_cor[k]>=0 && y+y_cor[k]>=0 && x+x_cor[k]<n && y+y_cor[k]<m && grid[x+x_cor[k]][y+y_cor[k]]=='1')
                            {
                                q.push({x+x_cor[k],y+y_cor[k]});
                                grid[x+x_cor[k]][y+y_cor[k]]='0';
                            }
                        }
                    }
                }
            }   
        }
        return count;
    }
};
