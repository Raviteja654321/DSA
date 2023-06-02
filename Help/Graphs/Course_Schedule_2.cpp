class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& a) {
        vector<int>adj[n];
        for(auto u:a)
        {
            adj[u[1]].push_back(u[0]);
        }
        vector<int>indeg(n,0);
        for(int i=0;i<n;i++)
        {
            for(auto u:adj[i])
            {
                indeg[u]++;
            }
        }
        vector<int>ans;
        queue<int>q;
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
        if(ans.size()!=n)
        {
            return {};
        }
        return ans;
    }
};
