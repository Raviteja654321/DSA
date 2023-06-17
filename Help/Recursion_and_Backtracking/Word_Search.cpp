class Solution {
private:
    bool ok(vector<vector<char>>&a,int x,int y)
    {
        int n=a.size();
        int m=a[0].size();
        if(x>=0 && x<n && y>=0 && y<m)
        {
            return true;
        }
        return false;
    }
    bool bfs(vector<vector<char>>&a,string s,int i,int x,int y)
    {
        if(i==s.size())
        {
            return true;
        }
        if(!ok(a,x,y))
        {
            return false;
        }
        if(a[x][y]==s[i])
        {
            a[x][y]='$';
            if(bfs(a,s,i+1,x-1,y) || bfs(a,s,i+1,x,y+1) || bfs(a,s,i+1,x+1,y) || bfs(a,s,i+1,x,y-1))
            {
                return true;
            }
            a[x][y]=s[i];
        }
        return false;
    }
public:
    bool exist(vector<vector<char>>& a, string word) 
    {
        int n=a.size();
        int m=a[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(bfs(a,word,0,i,j))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
