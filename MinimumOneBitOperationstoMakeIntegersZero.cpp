class Solution {
public:
    int logBase2(int n){
        int k = 0;
        while((1 << k) <= n) k++;
        return k - 1;
    }
    int minimumOneBitOperations(int n) {
        if (n == 0) return 0;
        int k = logBase2(n);
        return (1 << (k + 1)) - 1 - minimumOneBitOperations(n ^ (1 << k));
    }
};
