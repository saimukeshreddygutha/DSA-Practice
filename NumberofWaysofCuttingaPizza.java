class Solution {
    HashMap<String, Integer> cache = new HashMap<>();
    public final int mod = (int)1e9 + 7;
    public int recursiveCut(int[][] dp, int cur_row, int cur_col, int k, int r, int c){

        String key = cur_row + " " + cur_col + " " + k;

        if(cache.get(key) != null)return cache.get(key);

        if(dp[cur_row][cur_col] == 0)return 0;

        if(k == 0)return 1;

        long cuts = 0;

        for(int i = cur_row+1;i < r;i++){
            if(dp[cur_row][cur_col] - dp[i][cur_col] > 0){
                cuts = (cuts + recursiveCut(dp, i, cur_col, k - 1, r, c)) % mod;
            }
        }

        for(int i = cur_col+1;i < c;i++){
            if(dp[cur_row][cur_col] - dp[cur_row][i] > 0){
                cuts = (cuts + recursiveCut(dp, cur_row, i, k - 1, r, c)) % mod;
            }
        }

        cache.put(key, (int)cuts % mod);

        return (int)cuts % mod;

    }
    public int ways(String[] pizza, int k) {
        
        int r = pizza.length;
        int c = pizza[0].length();

        int dp[][] = new int[r+1][c+1];

        for(int i = r - 1;i > -1;i--){
            for(int j = c - 1;j > -1;j--){
                if(pizza[i].charAt(j) == 'A')dp[i][j] = 1;
                dp[i][j] += dp[i + 1][j] + dp[i][j + 1] - dp[i+1][j+1];
            }
        }
        
        return recursiveCut(dp, 0, 0, k - 1, r, c);
    }
}
