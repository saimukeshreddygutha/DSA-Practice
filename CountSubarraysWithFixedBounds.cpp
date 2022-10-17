class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
        
        long long ans = 0;
        int n = nums.size();
        int mn = -1;
        int mx = -1;
        int start = 0;
        for(int i = 0;i < n;i++){
            if(nums[i] < minK || nums[i] > maxK){start = i + 1;mn = -1;mx = -1;}
            if(nums[i] == minK){mn = i;}
            if(nums[i] == maxK){mx = i;}
            if(mn != -1 && mx != -1)ans += (min(mn, mx) - start + 1); 
            
        }
        
        return ans;
    }
};
