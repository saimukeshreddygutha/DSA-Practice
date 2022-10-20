class Solution {
    public int longestSubarray(int[] nums) {
        
        int ans = 0;
        int mx = 0;
        int n = nums.length;
        for(int i = 0;i < n;i++){
            mx = Math.max(mx, nums[i]);
        }
        
        int count = 0;
        for(int i = 0;i < n;i++){
            if(nums[i] == mx)count++;
            else count = 0;
            
            ans = Math.max(ans, count);
        }
        return ans;
    }
}
