class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int h = numbers.length - 1, l = 0;
        int[] ans = new int[2];
        
        while(l < h){
            int sum = numbers[l] + numbers[h];
            if(sum == target){
                ans[0] = l + 1;
                ans[1] = h + 1;
                return ans;
            }else if(sum > target)h--;
            else l++;
        }
        return ans;
    }
}
