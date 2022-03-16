class Solution {
    public int maxSumAfterPartitioning(int[] arr, int k) {
        int n = arr.length;
        int[] max = new int[n + 1];
        
        for(int i=1;i<n+1;i++){
            int mx = Integer.MIN_VALUE;
            int best = Integer.MIN_VALUE;
            for(int j=1;j<=k && i-j>=0;j++){
                mx=Math.max(mx,arr[i-j]);
                best = Math.max(best,mx*j+max[i-j]);
            }
            max[i]= best;
        }
        
        return max[n];
    }

}
