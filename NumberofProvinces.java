class Solution {

    public void dfs(boolean[] vi, int[][] isConnected, int i, int n){

        if(vi[i])return;

        vi[i] = true;

        for(int j = 0;j < n;j++){
            if(i != j && isConnected[i][j] == 1)dfs(vi, isConnected, j, n);
        }
    }
    public int findCircleNum(int[][] isConnected) {
        
        int n = isConnected.length;
        int res = 0;
        boolean[] vi = new boolean[n];
        for(int i = 0;i < n;i++){
            
            if(!vi[i]){dfs(vi, isConnected,i, n);res++;}
        }

        return res;
    }
}
