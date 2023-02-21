class Solution {
    public int[] findArray(int[] pref) {
        int n = pref.length;
        if(n == 1)return pref;
        int prev = pref[0];
        for(int i = 1;i < n;i++){
            pref[i] = pref[i] ^ prev;
            prev = prev ^ pref[i];
        }
        return pref;
    }
}
