class Solution {

    public boolean isValid(int value, int[] nums, int n){
        long sum = 0;
        for(int i = 0;i < n;i++){
            sum += nums[i];

            if(sum > (long)value * (i+1))return false;
        }
        return true;
    }
    public int minimizeArrayValue(int[] nums) {
        
        int ans = -1;
        int n = nums.length;
        int low = 0, high = 0;

        for(int i = 0;i < n;i++)high = Math.max(high, nums[i]);

        while(low <= high){
            int mid = (high - low)/2 +low;

            if(isValid(mid, nums, n)){
                ans = mid;
                high = mid -1;
            }else low = mid + 1;
        }

        return ans;
    }
}
