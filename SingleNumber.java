class Solution {
    public int singleNumber(int[] nums) {
        int ones = 0;
        for(int i = 0;i < nums.length;i++)
            ones = ones ^ nums[i];
        return ones;
        
    }
}
