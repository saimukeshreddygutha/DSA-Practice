class Solution {
    public int arraySign(int[] nums) {
        
        int n = nums.length;
        boolean isNeg = false;
        for(int i = 0;i < n;i++){
            if(nums[i] < 0)isNeg = !isNeg;
            if(nums[i] == 0)return 0;
        }

        return isNeg == true ? -1 : 1;
    }
}
