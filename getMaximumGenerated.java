class Solution {
    public int getMaximumGenerated(int n) {
      /*
      1.if 2*i is less than n it is not guaranteed that 2*i+1 should be less than n
      */
        
        int[] a = new int[101];
        a[0]=0;
        a[1]=1;
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int ans=1;
        
        int p = 2,i=1;
        while(p<=n){
            if(2*i<=n){
                a[2*i]=a[i];
                ans=Math.max(ans,a[2*i]);
            }
            if((2*i+1)<=n){
                a[2*i+1]=a[i]+a[i+1];
                ans=Math.max(ans,a[2*i+1]);
            }
            p++;
            i++;
        }
        
        return ans;
    }
}
