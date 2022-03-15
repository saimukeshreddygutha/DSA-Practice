class Solution {
public:
    /*
    https://leetcode.com/problems/maximum-sum-circular-subarray/
    */
    int findMaxSum(vector<int> nums){
        int sum=0,ans=0;
        for(auto i: nums){
            
            sum+=i;
            if(sum<0)
                sum=0;
            ans=max(ans,sum);
        }
        return ans;
    }
    
    int findMinSum(vector<int> nums){
        
        int sum =0, ans =0;
        if(*min_element(nums.begin(),nums.end())>0)
            return *min_element(nums.begin(),nums.end());
        for(auto i: nums){
            sum+=i;
            if(sum>0)
                sum=0;
            ans=min(sum,ans);
        }
        return ans;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int sum = accumulate(nums.begin(),nums.end(),0);
        
        if(*max_element(nums.begin(),nums.end())<0)
            return *max_element(nums.begin(),nums.end());
        
        return max(findMaxSum(nums), sum-findMinSum(nums));
        
    }
};
