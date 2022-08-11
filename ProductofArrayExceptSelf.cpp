class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int ans = 1, n = nums.size();
        int z = 0;
        for(int i = 0;i < n;i++){
            if(nums[i] == 0)z++;
            else ans *= nums[i];
        }
        
        vector<int> res;
        for(int i = 0;i < n;i++){
            if(nums[i] == 0 && z == 1)res.push_back(ans);
            else if(nums[i] == 0 && z > 1)res.push_back(0);
            else if(z)res.push_back(0);
            else res.push_back(ans/nums[i]);
        }
        
        return res;
    }
};
