class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        long long ones = 0;
        long long twos = 0;
        
        for(auto i : nums){
            ones = (ones ^ i) & ( ~ twos);
            twos = (twos ^ i) & (~ ones);
        }
        
        return ones;
    }
};
