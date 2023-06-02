class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int n, vector<int> adj[]) 
	{
	    vector<int>indeg(n,0);
	    for(int i=0;i<n;i++)
	    {
	        for(auto u:adj[i])
	        {
	            indeg[u]++;
	        }
	    }
	    queue<int>q;
	    vector<int>ans;
	    for(int i=0;i<n;i++)
	    {
	        if(!indeg[i])
	        {
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        ans.push_back(q.front());
	        for(auto u:adj[q.front()])
	        {
	            indeg[u]--;
	            if(!indeg[u])   
	            {
	                q.push(u);
	            }
	        }
	        q.pop();
	    }
	    return ans;
	}
};
