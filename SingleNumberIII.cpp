class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    
        
        long long a = 0;
        for(auto i: nums)
            a = (a ^ i);
        
        a &= -a;
        vector<int> ans{0,0};
        
        for(auto i : nums){
            if(a & i)ans[0] ^= i;
            else ans[1] ^= i;
        }
        
        return ans;
        
    }
};
