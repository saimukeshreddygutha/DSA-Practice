class Solution {
public:
    int sum(long long n){
        int s = 0;
        while(n){
            s += n%10;
            n/=10;
        }
        return s;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long long ni = n;
        long long base = 1;
        while(sum(n) > target){
            n = (n/10) + 1;
            base *= 10;
        }
        
        return n*base - ni;
    }
};
