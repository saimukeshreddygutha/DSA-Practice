class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int l = nums.size();
        int lens[l];
        lens[0] = 1;
        for(int i = 1;i < l;i++){
            lens[i] = 1;
            for(int j = 0;j < i;j++){
                if(nums[i] > nums[j] && lens[i] < lens[j] + 1)lens[i] = lens[j] + 1;
            }
        }
        
        return *max_element(lens, lens + l);
    }
};
