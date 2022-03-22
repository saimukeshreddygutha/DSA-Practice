class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0u;
        int i = 31;
        for(;i >= 0;i--){
            if((n&1) == 1){
                ans +=(1<<i);
            }
            n = n>>1;
        }
        return ans;
    }
};
