class Solution {
    public int dfs(int[][] grid, int i, int j, int m, int n, int c){
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0)return c;
        int[] op = new int[]{0, 1, 0, -1, 0};
        int origin = grid[i][j];
        grid[i][j] = 0;
        int mx = 0;
        for(int k = 0;k < op.length-1;k++){
            mx = Math.max(mx, dfs(grid, i+op[k], j + op[k+1], m, n, c+origin));
        }
        grid[i][j] =origin;

        return mx;
    }
    public int getMaximumGold(int[][] grid) {
        
        int m = grid.length;
        int n = grid[0].length;
        int ans = 0;
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                if(grid[i][j] != 0){int tans = dfs(grid, i, j, m, n, 0);ans = Math.max(ans, tans);}
            }
        }
        return ans;
    }
}
