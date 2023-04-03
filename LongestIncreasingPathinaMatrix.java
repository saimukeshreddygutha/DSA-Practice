class Solution {


    public int dfs(int[][] matrix, int i, int j, int prev, int[][] dis){
        
        int r = matrix.length;
        int c = matrix[0].length;

        if(dis[i][j] != -1)return dis[i][j];

        int curDis = 0;
        if(i+1 < r && matrix[i][j] < matrix[i+1][j])
            {dis[i+1][j] = dfs(matrix, i+1, j, matrix[i][j], dis);curDis=Math.max(curDis, dis[i+1][j]);}
        if(i-1 > -1 && matrix[i][j] < matrix[i-1][j])
            {dis[i-1][j] = dfs(matrix, i-1, j, matrix[i][j], dis);curDis=Math.max(curDis, dis[i-1][j]);}
        if(j+1 < c && matrix[i][j] < matrix[i][j+1])
            {dis[i][j+1] = dfs(matrix, i, j+1, matrix[i][j], dis);curDis=Math.max(curDis, dis[i][j+1]);}
        if(j-1 > -1 && matrix[i][j] < matrix[i][j-1])
            {dis[i][j-1] = dfs(matrix, i, j-1, matrix[i][j], dis);curDis=Math.max(curDis, dis[i][j-1]);}

        return dis[i][j] = curDis+1;
    }
    public int longestIncreasingPath(int[][] matrix) {
        
        int r = matrix.length;
        int c = matrix[0].length;
        int[][] distance = new int[r][c];

        for(int i = 0;i < r;i++)
            for(int j = 0;j < c;j++)
                distance[i][j] = -1;
        int ans = 1;
        for(int i = 0;i < r;i++){
            for(int j = 0;j < c;j++){
                if(distance[i][j] == -1)
                    ans = Math.max(dfs(matrix, i, j, -1, distance), ans);
            }
        }

        return ans;
    }
}
