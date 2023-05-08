class Solution {
public:
    int diagonalSum(vector<vector<int>>& a) {
        int n=a.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i][i];
            sum+=a[i][n-i-1];
        }
        if(n%2)
        {
            sum-=a[n/2][n/2];
        }
        return sum;
    }
};
