class Solution {
public:
    int numEnclaves(vector<vector<int>>&a) {
        int m=a.size();
        int n=a[0].size();
        vector<vector<int>>check(m,vector<int>(n,1));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++)
        {   
            if(a[i][0])
            {
                q.push({i,0});
            }
            if(a[i][n-1])
            {
                q.push({i,n-1});
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[0][i])
            {
                q.push({0,i});
            }
            if(a[m-1][i])
            {
                q.push({m-1,i});
            }
        }
        while(!q.empty())
        {   
            vector<int>x={-1,1,0,0};
            vector<int>y={0,0,-1,1};
            auto s=q.front();
            // cout<<s.first<<" "<<s.second<<endl;
            q.pop();
            if(check[s.first][s.second])
            {
                check[s.first][s.second]=0;
                for(int i=0;i<4;i++)
                {
                    if(s.first+x[i]>=0 && s.first+x[i]<=m-1 && s.second+y[i]>=0 && s.second+y[i]<=n-1 && check[s.first+x[i]][s.second+y[i]] && a[s.first+x[i]][s.second+y[i]])
                    {
                        q.push({s.first+x[i],s.second+y[i]});
                    }
                }   
            }
        }
        int answer=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j] && check[i][j])
                {
                    answer++;
                }
            }
        }
        return answer;
    }
};
