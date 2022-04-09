class Solution {
public:
    
    int lbs(vector<int> nums, int t){
        int ans = -1;
        
        int l = 0, h = nums.size()-1;
        
        while(l <= h){
            int m = (l+h)/2;
            if(nums[m] == t){
                ans = m;
                h = m -1;
            }
            else if(nums[m] > t){
                h = m-1;
            }
            else{
                l = m + 1;
            }
        }
        return ans;
    }
    int rbs(vector<int> nums, int t){
        int ans = -1;
        
        int l = 0, h = nums.size()-1;
        
        while(l <= h){
            int m = (l+h)/2;
            if(nums[m] == t){
                ans = m;
                l = m +1;
            }
            else if(nums[m] > t){
                h = m-1;
            }
            else{
                l = m + 1;
            }
        }
        return ans;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        sort(nums.begin(), nums.end());
        
        int p = lbs(nums, target);
        
        if(p == -1)return ans;
        
        int q = rbs(nums, target);
        
        for(int i = p; i <= q;i++)
            ans.push_back(i);
        
        return ans;
        
    }
};
