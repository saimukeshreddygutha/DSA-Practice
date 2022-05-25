class Solution {
public:
    bool canJump(vector<int>& nums) {
        // if(nums[0] == 0 && nums.size() == 1)return true;
        int reachable = 0;
        int len = nums.size();
        for(int i = 0;i < len;i++){
            if(reachable < i)return false;
            reachable = max(reachable, i + nums[i]);
        }
        
        return true;
    }
};
