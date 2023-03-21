class Solution {
    public long zeroFilledSubarray(int[] nums) {
        
        long res = 0;
        int streak = 1;
        for(int i = 0;i < nums.length;i++){
            if(nums[i] != 0)streak = 1;
            else{
                res += streak;
                streak++;
            }
        }
        return res;
    }
}
