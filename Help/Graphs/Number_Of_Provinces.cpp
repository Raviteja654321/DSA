class Solution {
public:
    int findCircleNum(vector<vector<int>>& a) {
        int n=a.size();
        vector<int>visited(n,0);
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j])
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                count++;
                queue<int>q;
                q.push(i);
                visited[i]=1;
                while(!q.empty())
                {
                    int s=q.front();
                    q.pop();
                    for(auto u:adj[s])
                    {
                        if(!visited[u])
                        {
                            visited[u]=1;
                            q.push(u);
                        }
                    }
                }
            }
        }
        return count;
    }
};
