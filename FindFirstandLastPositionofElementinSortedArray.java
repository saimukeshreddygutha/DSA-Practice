class Solution {
    public int[] searchRange(int[] nums, int target) {
        
        
        int l = 0, r = nums.length-1;
        int[] ans = new int[2];
        ans[0] = -1;
        ans[1] = -1;
        
        while(l <= r){
            int m = (l + r)/2;
            if(nums[m] == target){
                ans[0] = m;
                r = m - 1;
            }
            else if(nums[m] > target){
                r = m - 1;
            }
            else
                l = m + 1;
        }
        
        if(ans[0] == -1)return ans;
        
        l = 0;
        r = nums.length - 1;
        
        while(l <= r){
            int m = (l + r)/2;
            if(nums[m] == target){
                ans[1] = m;
                l = m + 1;
            }
            else if(nums[m] > target){
                r = m - 1;
            }
            else
                l = m + 1;
        }
        
        return ans;
    }
}
