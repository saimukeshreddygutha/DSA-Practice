class Solution {
public:
    
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while(i < j){
            while((nums[i]&1) == 0 && i < j)i++;
            while((nums[j]&1) == 1 && j > i)j--;
            if(i < j){
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }
        }
        
        return nums;
    }
};
