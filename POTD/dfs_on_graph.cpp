class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int>ans;
    void dfs(vector<int>adj[],vector<int>&vis,int node)
    {
        vis[node]=1;
        ans.push_back(node);
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(adj,vis,it);
            }
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        vector<int>vis(v,0);
        dfs(adj,vis,0);
        return ans;
    }
};
