class Solution {
public:
    int firstMissingPositive(vector<int>& nums){
        int len = nums.size();
        for(int i = 0;i < len;i++)
            if(nums[i] < 1 || nums[i] > len)nums[i] = len + 2;
        
        for(int i = 0;i < len;i++){
            if(abs(nums[i]) != len + 2){
                nums[abs(nums[i]) - 1] = - abs(nums[abs(nums[i]) - 1]);
            }
        }
        for(int i = 0;i < len;i++)if(nums[i] > 0)return i + 1;
        return len + 1;
    }
};
