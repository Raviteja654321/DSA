//check contains cycle in DAG
class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& a) {
        vector<int>adj[n];
        for(auto u:a)
        {
            // for(auto u:a[i])
            {
                adj[u[1]].push_back(u[0]);
            }
        }
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
        return (ans.size()==n);
    }
};
