class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> a, int n) {
        vector<int>ans(2,0);
        for(int i=0;i<n;i++)
        {
            if(a[0][i]==1)
            {
                ans[0]=0;
                ans[1]=n-i;
                break;
            }
        }
        for(int i=1;i<n;i++)
        {
            if(n>=ans[1]+1 && a[i][n-ans[1]-1]==1) 
            {
                int temp=n-ans[1];
                while(temp>=0)
                {
                    if(a[i][temp]==1)
                    {
                        ans[0]=i;
                        ans[1]=n-temp;
                    }
                    temp--;
                }
            }
        }
        return ans;
    }
};
