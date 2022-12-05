class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n < 3)return 0;
        int dp[n-1];
        for(int i = 1;i < n;i++)
            dp[i-1] = nums[i] - nums[i-1];
        int ans = 0;
        int tracker = 1;
        for(int i = 1;i < n-1;i++){
            if(dp[i] == dp[i-1]){
                ans+=tracker;
                tracker++;
            }else tracker = 1;
        }
        return ans;
    }
};
