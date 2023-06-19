class Solution {
    public int largestAltitude(int[] gain) {
        
        int n = gain.length;
        int res = 0;
        int mx = 0;
        for(int i = 0;i < gain.length;i++){
            res += gain[i];
            mx = Math.max(res, mx);
        }

        return mx;
    }
}
