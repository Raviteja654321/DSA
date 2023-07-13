class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& a) {
        int m=a.size();
        vector<int>indeg(n,0);
        vector<int>adj[n];
        for(int i=0;i<m;i++)
        {
            adj[a[i][1]].push_back(a[i][0]);
            indeg[a[i][0]]++;
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0)
            {
                q.push(i);
                ans.push_back(i);
            }
        }
        while(!q.empty())
        {
            auto s=q.front();q.pop();
            for(auto u:adj[s])
            {
                indeg[u]--;
                if(indeg[u]==0) 
                {
                    q.push(u);
                    ans.push_back(u);
                }
            }
        }
        return (ans.size()==n);
    }
};
