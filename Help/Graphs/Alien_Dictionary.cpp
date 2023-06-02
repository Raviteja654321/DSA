
class Solution{
    public:
    string findOrder(string dict[], int n, int k) {
        vector<int>adj[k];
        if(n==1)
        {
            return dict[0];
        }
        for(int i=1;i<n;i++)
        {
            int mini=min(dict[i].size(),dict[i-1].size());
            for(int j=0;j<mini;j++)
            {
                if(dict[i][j]==dict[i-1][j])
                {
                    continue;
                }
                else
                {
                    // cout<<i<<" "<<j<<endl;
                    adj[dict[i-1][j]-'a'].push_back(dict[i][j]-'a');
                    break;
                }
            }
        }
        vector<int>indeg(k,0);
        for(int i=0;i<k;i++)
        {
            for(auto u:adj[i])
            {
                indeg[u]++;
            }
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<k;i++)
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
        string s="";
        for(int i=0;i<k;i++)
        {
            s+=(ans[i]+'a');
        }
        // cout<<ans.size()<<endl;
        return s;
    }
};
