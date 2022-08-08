class Solution {
public:
    bool isSafe(vector<vector<char>> board, int i, int j, int n, char c){
        for(int k = 0;k < n;k++){
            if(board[i][k] == c || board[k][j] == c)return false;
        }
        
        int sx = (i/3)*3;
        int sy = (j/3)*3;
        for(int k = sx;k < sx + 3;k++){
            for(int l = sy;l < sy + 3;l++)if(board[k][l] == c)return false;
        }
        
        return true;
    }
    bool solve(vector<vector<char>> &board, int i, int j, int n){
        if(i == n)return true;
        
        if(j == n)return solve(board, i + 1, 0, n);
        
        if(board[i][j] != '.')return solve(board, i, j + 1, n);
        
        for(int c = '1'; c <= '9';c++){
            if(isSafe(board, i, j, n, c)){
                board[i][j] = c;
                bool canSolve = solve(board, i, j + 1, n);
                if(canSolve == true)return true;
            }
        }
        
        board[i][j] = '.';
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0, 9);
    }
};
