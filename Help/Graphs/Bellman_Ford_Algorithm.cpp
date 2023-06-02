//will work to find the shortest path with negative edges also but not used for negative cycles(sum of weights of cycle edges is negative)
class Solution {
  public:
    
    vector<int> bellman_ford(int n, vector<vector<int>>& edges, int S) {
        vector<int>dis(n,1e8);
        dis[S]=0;
        for(int i=0;i<n-1;i++)
        {
            for(auto it:edges)
            {
                int x=it[0];
                int y=it[1];
                int wt=it[2];
                if(dis[y]>dis[x]+wt)
                {
                    dis[y]=dis[x]+wt;
                }
            }
        }
        for(auto it:edges)
        {
            int x=it[0];
            int y=it[1];
            int wt=it[2];
            if(dis[y]>dis[x]+wt)
            {
                return {-1};
            }
        }
        return dis;
    }
};
