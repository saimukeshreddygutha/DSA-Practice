class Solution {
public:
    
    int dfs(vector<vector<int>> &grid, int i, int j){
        
        if(i == grid.size())return j;
        int nextCol = j + grid[i][j];
        if(nextCol < 0 || nextCol > grid[0].size() - 1 || grid[i][j] != grid[i][nextCol])return -1;
        return dfs(grid, i + 1, nextCol);
    }
    
    vector<int> findBall(vector<vector<int>>& grid) {

        
        vector<int> ans(grid[0].size(), 0);
        for(int i = 0;i < grid[0].size();i++)ans[i] = dfs(grid, 0, i);
        
        return ans;
    }
};
