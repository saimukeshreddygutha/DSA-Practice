class Solution {
    public int longestConsecutive(int[] nums) {
        int n = nums.length;
        if(n == 0)return 0;
        HashSet<Integer> set = new HashSet<>();
        int mx = Integer.MIN_VALUE;
        int mn = Integer.MAX_VALUE;
        for(int i = 0;i < n;i++){set.add(nums[i]);mx = Math.max(mx, nums[i]);mn = Math.min(mn, nums[i]);}

        int res = 0;
        for(Integer ele: set){
            if(set.contains(ele - 1))continue;
            else{
                int y = ele;
                int cur = 0;
                while(set.contains(y)){y++;cur++;res = Math.max(cur, res);}
            }
        }

        return res;
    }
}
