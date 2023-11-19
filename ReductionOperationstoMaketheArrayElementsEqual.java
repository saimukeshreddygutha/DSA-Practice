class Solution {
    public int reductionOperations(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int mx = Integer.MIN_VALUE;
        int mn = Integer.MAX_VALUE;
        for(int i = 0;i < nums.length;i++){
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
            mx = Math.max(mx, nums[i]);
            mn = Math.min(mn, nums[i]);
        }
        int res = 0;
        if(map.size() == 1)return 0;
        int t = 0;
        for(int i = mx;i > mn;i--){
            if(map.getOrDefault(i, 0) != 0)
                res += map.getOrDefault(i, 0) + t;
            t += map.getOrDefault(i, 0);
        }
        return res;
    }
}
