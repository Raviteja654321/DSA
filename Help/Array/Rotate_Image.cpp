class Solution {
public:
    void rotate(vector<vector<int>>& a) 
    {
        int n=a[0].size();
        for(int i=0;i<(n);i++)
        {
            for(int j=0;j<=i;j++)
            {
                int temp=a[j][i];
                a[j][i]=a[i][j];
                a[i][j]=temp;
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(a[i].begin(),a[i].end());
        }
    }
};
