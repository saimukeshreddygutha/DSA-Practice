class Solution {
public:
    int numSquares(int n) {
        int dp[n + 1];
        fill(dp, dp + n + 1, INT_MAX);
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2;i < n + 1;i++){
            for(int j = 1;j < i;j++){
                if(i - (j * j) > -1)
                    dp[i] = min(dp[i], 1 + dp[i - (j * j)] );
            }
        }
        return dp[n];
    }
};
