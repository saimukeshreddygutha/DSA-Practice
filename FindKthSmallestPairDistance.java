
class Solution {
    public int smallestDistancePair(int[] nums, int k) {
        int[] diffs = new int[(int)10e6 + 1];
        int leastDiff = (int)10e6;
        for(int i = 0;i < nums.length - 1;i++){
            for(int j = i + 1; j < nums.length;j++){
                int sub = Math.abs(nums[i] - nums[j]);
                diffs[sub]++;
                if(leastDiff > sub)
                    leastDiff = sub;
            }
        }
        while(k != 1){
            if(diffs[leastDiff] == 1){
                diffs[leastDiff]-=1;
                while(diffs[leastDiff] == 0)leastDiff++;
            }
            else{
                diffs[leastDiff]-=1;
            }
            k--;
        }
        return leastDiff;
    }
}
