class Solution {
public:

    int ans;

    bool canPlace(vector<vector<int>> &chess, int row, int col, int n){

        for(int i = 0;i < n;i++)if(chess[row][i] || chess[i][col])return false;
        for(int i=row, j=col; i>=0 and j>=0; i--, j--) if(chess[i][j] == 1) return false;
        for(int i=row, j=col; j>=0 and i<n; i++, j--) if(chess[i][j] == 1) return false;

        return true;

    }

    void solve(vector<vector<int>> &chess, int col, int n){
        if(col >= n){ans++;return;}

        for(int i = 0;i < n;i++){
            if(canPlace(chess, i, col, n)){
                chess[i][col] =1;
                solve(chess, col+1, n);
                chess[i][col] = 0;
            }
        }
    }
    int totalNQueens(int n) {
        ans = 0;

        vector<vector<int>> chess(n, vector<int>(n, 0));
        solve(chess, 0, n);
        return ans;
    }
};
