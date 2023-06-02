//by using priority_queue the compulations will be reduced rather than using queue only 
// using set is the best and efficient way but the implementation is not yet done.
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int n, vector<vector<int>> adj[], int S)
    {
        vector<int>dis(n,INT_MAX);
        priority_queue<pair<int,int>>pq;
        dis[S]=0;
        pq.push({0,S});
        while(!pq.empty())
        {
            auto s=pq.top();
            pq.pop();
            for(auto u:adj[s.second])
            {
                if(dis[u[0]]>dis[s.second]+u[1])
                {
                    dis[u[0]]=dis[s.second]+u[1];
                    pq.push({-dis[u[0]],u[0]});
                }
            }
        }
        return dis;
    }
};
