class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0)return 1;
        int ans = 10;
        int start = 9;
        int cur = 9;
        while(n-- > 1 && start){
            cur *= (start--);
            ans += cur;
        }
        return ans;
    }
};
