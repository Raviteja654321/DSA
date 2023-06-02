class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int n, vector<int> adj[]) {
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                vis[i]=1;
                queue<pair<int,int>>q;
                q.push({i,-1});
                while(!q.empty())
                {
                    auto s=q.front();
                    q.pop();
                    for(auto u:adj[s.first])
                    {
                        if(!vis[u])
                        {
                            q.push({u,s.first});
                            vis[u]=1;
                        }
                        else 
                        {
                            if(u!=s.second)
                            {
                                return true;
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
};
