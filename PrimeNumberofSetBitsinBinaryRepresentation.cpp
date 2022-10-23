class Solution {
public:
    bool primes[33]= {
            false,
            false,
            true,
            true,
            false,
            true,
            false,
            true,
            false,
            false,
            false,
            true,
            false,
            true,
            false,
            false,
            false,
            true,
            false,
            true,
            false,
            false,
            false,
            true,
            false,
            false,
            false,
            false,
            false,
            true,
            false,
            true,
            false
            
        };
    int countPrimeSetBits(int left, int right) {
        
        int count = 0;
        for(int i = left;i <= right;i++){
            int ans = 0;
            int n = i;
            while(n){
                ans++;
                n = (n&(n-1));
            }
            if(primes[ans])count++;
        }
        return count;
    }
};
