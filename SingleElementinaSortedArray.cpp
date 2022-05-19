class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;
        int mid = 0;
        while(l < h){
            mid = (l + h)/2;
            if((mid & 1)){
                if(nums[mid] == nums[mid - 1])
                    l = mid + 1;
                else h = mid;
            }
            else{
                if(nums[mid] == nums[mid + 1])
                    l = mid + 1;
                else
                    h = mid;
            }
        }
        
        return nums[h];
    }
};
