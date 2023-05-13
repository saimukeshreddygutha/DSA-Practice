class Solution {
    public int countGoodStrings(int low, int high, int zero, int one) {
        int[] dp = new int[high + 1];
        dp[0] = 1;
        int md = 1000000007;
        for (int i = Math.min(zero, one); i <= high; i++) {
            if (i >= zero) {
                dp[i] = (dp[i] + dp[i - zero]) % md;
            }
            if (i >= one) {
                dp[i] = (dp[i] + dp[i - one]) % md;
            }
        }
        int total = 0;
        for (int i = low; i <= high; i++) {
            total = (total + dp[i]) % md;
        }
        return total;
    }
}
