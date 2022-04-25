class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;
        if(h == 0)return nums[0];
        while(l < h){
            int m = (l + h)/2;
            
            if(m > 0 && nums[m] < nums[m-1])return nums[m];
            else if(nums[l] <= nums[m] && nums[m] > nums[h])
                l = m + 1;
            else
                h = m - 1;
        }
        
        return nums[l];
    }
};
