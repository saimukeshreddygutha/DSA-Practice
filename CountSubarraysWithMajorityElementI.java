class Solution {
    public int countMajoritySubarrays(int[] nums, int target) {
        int len = nums.length;
        int ans = 0;
        for(int i = 0;i < len;i++){
            int cnt = 0;
            for(int j = i;j < len;j++){
                if(nums[j] == target){
                    cnt += 1;
                }
                else {
                    cnt -=1;
                }

                if(cnt > 0){
                    ans++;
                 }
            }
            
        }
        return ans;
    }
}
