class Solution {
    public int mySqrt(int x) {
        
        long l = 0, h = x;
        long ans = 0;
        while(l <= h){
            long m = (l + h)/2;
            if(m*m == x)return (int)m;
            else if(m*m > x){
                h = m - 1;
            }
            else{
                ans = m;
                l = m + 1;
            }
        }
        return (int)ans;
    }
    
}
