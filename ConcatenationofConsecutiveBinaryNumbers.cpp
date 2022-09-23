class Solution {
public:
    int concatenatedBinary(int n) {
        int m = 1e9 + 7;
        int ans = 0;
        for(int i = 1;i <= n;i++){
            ans = (((long)ans * (long)pow(2, (int)(log2(i) + 1)))%m + i%m)%m;
        }
        
        return ans;
        
    }
};
