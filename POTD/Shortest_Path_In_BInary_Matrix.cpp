class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& a) {
        int n=a.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        queue<pair<int,int>>q;
        if(a[0][0]==0 && a[n-1][n-1]==0)
        {
            dp[0][0]=1;
            q.push({0,0});
            a[0][0]=1;
        }
        vector<int> x_cor={-1,-1,-1,0,+1,+1,+1,0};
        vector<int> y_cor={-1,0,+1,+1,+1,0,-1,-1};
        while(!q.empty())
        {
            auto it=q.front();
            int x=it.first;
            int y=it.second;
            q.pop();
            a[x][y]=1;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    if(x+x_cor[i]>=0 && x+x_cor[i]<n && y+y_cor[j]>=0 && y+y_cor[j]<n)
                    {
                        if(a[x+x_cor[i]][y+y_cor[j]]==0)
                        {

                            if(dp[x+x_cor[i]][y+y_cor[j]]>=dp[x][y]+1)
                            {
                                dp[x+x_cor[i]][y+y_cor[j]]=dp[x][y]+1;
                                q.push({x+x_cor[i],y+y_cor[j]});
                                a[x+x_cor[i]][y+y_cor[j]]=1;
                            }
                        }
                    }
                }
            }
        }
        if(dp[n-1][n-1]==INT_MAX)
        {
            return -1;
        }
        return dp[n-1][n-1];
    }
};

//[[0,1,1,0,0,0],[0,1,0,1,1,0],[0,1,1,0,1,0],[0,0,0,1,1,0],[1,1,1,1,1,0],[1,1,1,1,1,0]]
