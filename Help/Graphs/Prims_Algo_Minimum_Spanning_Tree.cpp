class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int n, vector<vector<int>> adj[])
    {
        priority_queue<pair<int,pair<int,int>>>pq;
        vector<int>vis(n,0);
        pq.push({0,{0,-1}});
        int sum=0;
        while(!pq.empty())
        {
            auto s=pq.top();
            pq.pop();
            if(!vis[s.second.first])
            {
                sum+=-s.first;
                vis[s.second.first]=1;
                for(auto u:adj[s.second.first])
                {
                    if(!vis[u[0]])
                    {
                        // sum+=u[1];
                        pq.push({-u[1],{u[0],s.second.first}});
                    }
                }
            }
        }
        return sum;
    }
};
