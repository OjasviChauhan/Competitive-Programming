// https://leetcode.com/problems/range-sum-query-2d-immutable/

class NumMatrix {
public:
    int dp[1001][1001];
    NumMatrix(vector<vector<int>>& matrix) {
        if (matrix.size() == 0)
            return;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        dp[0][0] = matrix[0][0];
        
        for(int i=1;i<row;i++){
            dp[i][0] = dp[i-1][0] + matrix[i][0]; 
        }
        for(int j=1;j<col;j++){
            dp[0][j] = dp[0][j-1] + matrix[0][j];
        }
        
        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                dp[i][j] = dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1] + matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans;
        ans = dp[row2][col2];
        if (row1 > 0)
            ans -= dp[row1-1][col2];
        if (col1 > 0)
            ans -= dp[row2][col1-1];
        if (row1 > 0 && col1 > 0)
            ans += dp[row1-1][col1-1];
        
        return ans;  
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
