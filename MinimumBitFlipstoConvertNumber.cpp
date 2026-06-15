class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res = start ^ goal;
        int bitFlips = 0;
        while(res){
            bitFlips +=1;
            res = res&(res-1);
        }
        return bitFlips;
    }
};
