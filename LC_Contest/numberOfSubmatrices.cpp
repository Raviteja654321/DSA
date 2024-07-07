class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(2, 0)));
        int ans = 0;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                dp[i][j][0] = (grid[i][j] == 'X') + 
                              ((i >= 1) ? dp[i-1][j][0] : 0) + 
                              ((j >= 1) ? dp[i][j-1][0] : 0) - 
                              ((i >= 1 && j >= 1) ? dp[i-1][j-1][0] : 0);
                
                dp[i][j][1] = (grid[i][j] == 'Y') + 
                              ((i >= 1) ? dp[i-1][j][1] : 0) + 
                              ((j >= 1) ? dp[i][j-1][1] : 0) - 
                              ((i >= 1 && j >= 1) ? dp[i-1][j-1][1] : 0);
                
                if (dp[i][j][0] == dp[i][j][1] && dp[i][j][0]>0) {
                    ++ans;
                }
            }
        }
        return ans;
    }
};
