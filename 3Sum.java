class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        
        int n  = nums.length;
        Arrays.sort(nums);
        List<List<Integer>> ans = new ArrayList<>();
        Set<List<Integer>> set = new HashSet<>();
        for(int i = 0;i < n - 2;i++){
            int j = i + 1;
            int k = n - 1;
            while(k > j){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){set.add(Arrays.asList(nums[i], nums[j], nums[k]));j++;k--;}
                else if(sum < 0)j++;
                else k--;
            }
            
        }

        ans.addAll(set);
        return ans;
    }
}
