class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = -1;
        int n = nums.size();
        int i = 0, j = n - 1;
        while(i < j){
            int mid = (i + j)/2;
            if(mid&1){
                if(nums[mid - 1] == nums[mid])i = mid + 1;
                else if(nums[mid + 1] == nums[mid])j = mid - 1;
                else return nums[mid];
            }else{
                if(nums[mid] == nums[mid + 1])i = mid + 2;
                else if(nums[mid] == nums[mid - 1])j = mid - 2;
                else return nums[mid];
            }
        }
        
        return nums[i];
    }
};
