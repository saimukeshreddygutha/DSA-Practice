class Solution {
    public int minImpossibleOR(int[] nums) {
        
        int n = nums.length;
        Arrays.sort(nums);
        int j = 1;
        for(int i = 0;i < n;i++){
            if(nums[i] > j)return j;
            else if(nums[i] == j)j *= 2;
        }
        return j;
    }
}
