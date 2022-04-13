class Solution {
    public int searchInsert(int[] nums, int target) {
        
        
        int l = 0, r = nums.length - 1;
        int ans = 0;
        
        while(l <= r){
            int m = (l + r)/2;
            if(nums[m] == target){
                ans = m;
                r = m - 1;
            }
            else if(nums[m] > target){
                r = m - 1;
            }
            else{
                ans = m + 1;
                l = m + 1;
            }
        }
        
        return ans;
    }
}
