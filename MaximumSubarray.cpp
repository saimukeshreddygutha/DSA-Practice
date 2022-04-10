class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int mx = *max_element(nums.begin(), nums.end());
        
        if(mx < 0)
            return mx;
        int ans = INT_MIN;
        
        int s = 0;
        
        for(auto x : nums){
            
            s += x;
            if(s < 0)
                s = 0;
            ans = max(ans, s);
        }
        
        return ans;
    }
};
