class Solution {
public:
    bool monotonicIncreasing(vector<int>& nums){
        int n = nums.size();
        for(int i = 0;i < n-1;i++){
            if(nums[i] > nums[i+1])return false;
        }
        return true;
    }
    bool monotonicDecreasing(vector<int>& nums){
        int n = nums.size();
        for(int i = n-1;i > 0;i--){
            if(nums[i] > nums[i-1])return false;
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        return monotonicIncreasing(nums) || monotonicDecreasing(nums);
    }
};
