class Solution {
public:
    int dfs(int r, int c, vector<vector<int>>& grid){
        
        if(r < 0 || r == grid.size() || c < 0 || c == grid[0].size() || grid[r][c] == 0)return 0;
        grid[r][c] = 0;
        return 1 + dfs(r - 1, c, grid) + dfs(r, c - 1, grid) + dfs(r, c + 1, grid) + dfs(r + 1, c, grid); 
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = INT_MIN;
        int r = grid.size();
        int c = grid[0].size();
        
        for(int i = 0;i < r;i++){
            for(int j = 0;j < c;j++){
                ans = max(ans, dfs(i, j, grid));
            }
        }
        
        return ans;
        
    }
};
