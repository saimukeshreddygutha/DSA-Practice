class Solution {

    public int gcd(int a, int b){
        return b == 0 ? a : gcd(b, a % b);
    }

    public int helper(int[] nums, int op, int mask, int[][] gcd, int[] dp){

        int n = nums.length;
        if(op > n/2)return 0;

        if(dp[mask] != -1)return dp[mask];

        for(int i = 0;i < n;i++){
            if((mask&(1<<i)) != 0)continue;
            
            for(int j = i+1;j < n;j++){
                if((mask&(1<<j)) != 0)continue;

                int score = op* gcd[i][j] + helper(nums, op + 1, mask | (1<<i) | (1<<j), gcd, dp);
                dp[mask] = Math.max(dp[mask], score);
            }
        }

        return dp[mask];
    }
    public int maxScore(int[] nums) {
        
        int m = nums.length;
        int n = nums.length/2;

        int[] dp = new int[1<<14];
        Arrays.fill(dp, -1);

        int[][] gcd = new int[m][m];

        for(int i = 0;i < m;i++){
            for(int j = 0;j < m;j++){
                gcd[i][j] = gcd(nums[i], nums[j]);
            }
        }

        return helper(nums, 1, 0, gcd, dp);
    }
}
