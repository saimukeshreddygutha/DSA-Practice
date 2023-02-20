class Solution {
    public int minOperations(int n) {
        
        if(n == 0)return 0;
        if(n == 1)return 1;

        int lowerPower = 1;
        while((lowerPower<<1) < n)lowerPower <<= 1;
        int minDiff = n - lowerPower;
        int maxDiff = (lowerPower<<1) - n;

        int opsForMin = minOperations(minDiff);
        int opsForMax = minOperations(maxDiff);

        return Math.min(opsForMin, opsForMax) + 1;  
    }
}
