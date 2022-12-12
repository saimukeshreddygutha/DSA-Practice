class Solution {
public:
    int numberOfCuts(int n) {
        if(n==0)return 1;
        if((n&1) == 0)return n/2;
        return n;
    }
};
