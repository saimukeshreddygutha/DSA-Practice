class Solution {

    public long solve(int[] nums, int[] cost, int mid){
        long total = 0;
        for(int i = 0;i < nums.length;i++){
            total += ((long)Math.abs(nums[i]- mid) * cost[i]);
        }

        return total;
    }
    public long minCost(int[] nums, int[] cost) {

        int l = Integer.MAX_VALUE;
        int h = Integer.MIN_VALUE;

        int ans = 0;

        for(int i = 0;i < nums.length;i++){

            l = Math.min(l, nums[i]);
            h = Math.max(h, nums[i]);
        }

        while(l <= h){
            int m = (h - l)/2 + l;

            if(solve(nums, cost, m) < solve(nums, cost, m + 1)){
                ans = m;
                h = m - 1;
            }else{
                l = m + 1;
            }
        }
        return solve(nums,cost, ans);
        
    }
}
