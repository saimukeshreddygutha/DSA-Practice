class Solution {
public:
    int solve(vector<int> nums){
        int rob1 = 0, rob2 = 0;
        for(int i : nums){
            int t = max(rob1 + i, rob2);
            rob1 = rob2;
            rob2 = t;
        }
        
        return rob2;
    }
    
    int rob(vector<int>& nums) {
        if(nums.size() < 1)return 0;
        if(nums.size() == 1)return nums[0];
        return max(solve(vector<int>(nums.begin(), nums.end() - 1)), solve(vector<int>(nums.begin() + 1, nums.end())));
    }
};
