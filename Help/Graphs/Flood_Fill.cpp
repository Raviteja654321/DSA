class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        queue<pair<int,int>>q;
        int fill=image[sr][sc];
        if(image[sr][sc]!=color)
        {
            q.push({sr,sc});
            image[sr][sc]=color;
        }
        while(!q.empty())
        {
            auto s=q.front();
            q.pop();
            int x=s.first;
            int y=s.second;
            vector<int>x_cor={-1,0,+1,0};
            vector<int>y_cor={0,+1,0,-1};
            for(int i=0;i<4;i++)
            {
                if(x+x_cor[i]>=0 && x+x_cor[i]<n && y+y_cor[i]>=0 && y+y_cor[i]<m && image[x+x_cor[i]][y+y_cor[i]]==fill)
                {
                    q.push({x+x_cor[i],y+y_cor[i]});
                    image[x+x_cor[i]][y+y_cor[i]]=color;
                }
            }
        }
        return image;
    }
};
