class Solution {
public:
    void dfs(vector<vector<char>>& grid, int r, int c){
        if(r < 0 || c < 0 || r == grid.size() || c == grid[0].size() || grid[r][c] == '0')return;
        grid[r][c] = '0';
        dfs(grid, r, c - 1);
        dfs(grid, r, c + 1);
        dfs(grid, r + 1, c);
        dfs(grid, r - 1, c);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int r = grid.size();
        int c = grid[0].size();
        for(int i = 0;i < r;i++){
            for(int j = 0;j < c;j++)
                if(grid[i][j] == '1'){
                    ans++;
                    dfs(grid, i, j);
                }
        }
        
        return ans;
    }
};
