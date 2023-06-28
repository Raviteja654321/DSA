class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& prob, int start, int end) {
        vector<pair<int,double>>adj[n];
        int size=edges.size();
        for(int i=0;i<size;i++)
        {
            adj[edges[i][0]].push_back({edges[i][1],prob[i]});
            adj[edges[i][1]].push_back({edges[i][0],prob[i]});
        }
        vector<int>vis(n,0);
        vector<double>dis(n,0);
        priority_queue<pair<double,int>>pq;
        pq.push({0,start});
        vis[start]=1;
        dis[start]=1;
        while(!pq.empty())
        {
            auto s=pq.top();
            pq.pop();
            for(auto u:adj[s.second])
            {
                if(!vis[u.first])
                {
                    if(dis[u.first]<dis[s.second]*u.second)
                    {
                        dis[u.first]=dis[s.second]*u.second;
                        pq.push({dis[u.first],u.first});
                    }
                }
            }
        }
        return dis[end];
    }
};
