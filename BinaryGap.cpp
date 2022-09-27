class Solution {
public:
    int binaryGap(int n) {
        int msb = log2(n);
        int ans = 0;
        for(int i = msb - 1;i >= 0;i--){
            if(n&(1<<i)){
                ans = max(ans, msb - i);
                msb = i;
            }
        }
        
        return ans;
    }
};
