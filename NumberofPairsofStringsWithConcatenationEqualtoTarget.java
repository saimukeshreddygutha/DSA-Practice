class Solution {
    public int numOfPairs(String[] nums, String target) {
        int ans = 0;
        int n = nums.length;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(i == j)continue;
                if(target.equals(nums[i] + nums[j]))ans++;
            }
        }

        return ans;
    }
}
