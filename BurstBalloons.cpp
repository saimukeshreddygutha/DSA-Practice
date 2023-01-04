class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        if(!n) return 0;
        int a[n+2];
        a[0] = a[n+1] = 1;
        for(int i=0; i<n; i++) a[i+1] = nums[i];
        int dp[n+2][n+2];
        memset(dp, 0, sizeof dp);
        for(int i=n-1; i>=0; i--){
            for(int j=i+1; j<=n+1; j++){
                for(int k=i+1; k<j; k++)
                    dp[i][j] = max(dp[i][j], dp[i][k] + dp[k][j] + a[i] * a[k] * a[j]);
            }
        }
        return dp[0][n+1];
    }
};
