class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long ans = INT_MAX;
        for(int i = 0;i < n;i++){
            int j = i + 1;
            int k = n - 1;
            while(j < k){
                int val = nums[i] + nums[j] + nums[k];
                if(abs(target - ans) > abs(target - val))ans = val;
                if(ans == target)return target;
                if(val > target)k--;
                else j++;
            }
        }

        return ans;
    }
};
