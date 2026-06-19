public class Solution {
    public int LargestAltitude(int[] gain) {
        int max = 0;
        int len = gain.Length;
        int curAltitude = 0;
        for(int i = 0;i < len;i++){
            curAltitude += gain[i];
            max = Math.Max(curAltitude, max);
        }
        return max;
    }
}
