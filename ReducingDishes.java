class Solution {
    public int maxSatisfaction(int[] satisfaction) {
        int n = satisfaction.length;
        Arrays.sort(satisfaction);
        int res = 0;
        for(int i = 0;i < n;i++){
            int start = 1;
            int sum = 0; 
            for(int j = i;j < n;j++){
                sum += satisfaction[j] * start;
                start++;
            }
            res = Math.max(res, sum);
        }

        return res;
    }
}
