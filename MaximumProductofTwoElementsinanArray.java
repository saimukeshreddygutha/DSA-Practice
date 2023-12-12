//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/?envType=daily-question&envId=2023-12-12
class Solution {
    public int maxProduct(int[] nums) {
        int maxNum1 = 0, maxNum2 = 0;

        for(int i = 0;i < nums.length;i++){

            if(nums[i] > maxNum1 && nums[i] > maxNum2){
                maxNum2 = maxNum1;
                maxNum1 = nums[i];
            }else if(nums[i] > maxNum2){
                maxNum2 = nums[i];
            }
        }

        return (maxNum2-1)*(maxNum1 - 1);
    }
}
