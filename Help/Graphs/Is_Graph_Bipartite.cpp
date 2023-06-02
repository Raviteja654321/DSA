class Solution {
public:
    bool isBipartite(vector<vector<int>>& a) {
        int n=a.size();
        vector<int>col(n,-1);
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                col[i]=1;
                queue<int>q;
                q.push(i);
                vis[i]=1;
                while(!q.empty())
                {
                    int s=q.front();
                    q.pop();
                    for(auto u:a[s])
                    {
                        if(col[u]==col[s])
                        {
                            return false;
                        }
                        else 
                        {
                            if(!vis[u])
                            {
                                q.push(u);
                                vis[u]=1;
                            }
                            col[u]=!col[s];
                        }
                    }
                }
            }
        }
        return true;
    }
};
