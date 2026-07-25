class Solution {
    public int maxProduct(int n) {
        int max1=Integer.MIN_VALUE, max2=Integer.MIN_VALUE;
        while(n > 0){
            int r = n%10;
            if(r >= max1){
                max2 = max1;
                max1 = r;
            } else if(r > max2){
                max2=r;
            }
            n /= 10;
        }

        return max1*max2;
    }
}
