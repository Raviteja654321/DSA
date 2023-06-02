class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int n, vector<vector<int>> adj[], int S)
    {
        vector<int>dis(n,INT_MAX);
        queue<int>q;
        dis[S]=0;
        q.push(S);
        while(!q.empty())
        {
            int s=q.front();
            q.pop();
            for(auto u:adj[s])
            {
                if(dis[u[0]]>dis[s]+u[1])
                {
                    dis[u[0]]=dis[s]+u[1];
                    q.push(u[0]);
                }
            }
        }
        return dis;
    }
};
