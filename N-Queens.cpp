class Solution {
public:
    vector<vector<string>> ans;

    bool check(vector<string> &v, int row, int col, int n) {
        for(int i=0; i<col; i++) if(v[row][i] == 'Q') return false;
        for(int i=row, j=col; i>=0 and j>=0; i--, j--) if(v[i][j] == 'Q') return false;
        for(int i=row, j=col; j>=0 and i<n; i++, j--) if(v[i][j] == 'Q') return false;

        return true;
    }

    void solve(vector<string> &v, int col, int n) {
        if(col >= n) {
            ans.push_back(v);
            return;
        }
        
        for(int i=0; i<n; i++) {
            if(check(v, i, col, n)) {
                v[i][col] = 'Q';
                solve(v, col+1, n);
                v[i][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> v(n, string(n, '.'));
        solve(v, 0, n);
        return ans;
    }
};
