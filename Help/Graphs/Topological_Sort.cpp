class Solution
{
    private:
    void dfs(int i,vector<int>adj[],vector<int>&vis,stack<int>&st)
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
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int n, vector<int> adj[]) 
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
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
	}
};
