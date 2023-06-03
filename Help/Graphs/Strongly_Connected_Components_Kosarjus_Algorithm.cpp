//Sort all the edges according to finishing time (do dfs and push them into stack)
//reverse all the edges
//perform dfs and count the number of times it is called.

class Solution
{
    private:
    void dfs(int i,vector<vector<int>>&adj,vector<int>&vis,stack<int>&st)
    {
        vis[i]=1;
        for(auto u:adj[i])
        {
            if(!vis[u])
            {
                dfs(u,adj,vis,st);
            }
        }
        st.push(i);
    }
    private:
    void dfs1(int i,vector<vector<int>>&adj,vector<int>&vis)
    {
        vis[i]=1;
        for(auto u:adj[i])
        {
            if(!vis[u])
            {
                dfs1(u,adj,vis);
            }
        }
    }
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int n, vector<vector<int>>& adj)
    {
        vector<int>vis(n,0);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis,st);
            }
        }
        
        vector<vector<int>>adjT(n);
        for(int i=0;i<n;i++)
        {
            for(auto u:adj[i])
            {
                adjT[u].push_back(i);
            }
        }
        int cnt=0;
        vector<int>vis1(n,0);
        while(!st.empty())
        {
            auto s=st.top();
            st.pop();
            if(!vis1[s])
            {
                cnt++;
                dfs1(s,adjT,vis1);
            }
        }
        return cnt;
    }
};
