class Solution {
    public boolean isPerfectSquare(int num) {
        
        /*
        
        as the contraint is 2^31-1 adding 1 will make it -2147483648
        */
        long first = 1L;
        long last = (long)num;
        
        
        while(first<=last){
            long mid =(first+last)/2;
            if(mid*mid == num)
                return true;
            else if(mid*mid > num)
                last=mid-1;
            else
                first=mid+1;
        }
        return false;
        
    }
}
