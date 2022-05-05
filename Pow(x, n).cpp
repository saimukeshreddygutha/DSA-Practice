class Solution {
public:
    double myPow(double x, int n) {
        
        
        long nn = abs(n);
        double ans = 1.0;
        while(nn > 0){
            if((nn&1) == 0){
                x *= x;
                nn /= 2;
            }
            else{
                ans *= x;
                nn -= 1;
            }
        }
        
        if(n < 0)return (1/ans);
        
        return ans;
    }
};
