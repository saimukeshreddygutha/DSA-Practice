class Solution {
public:
    void helper(int i,vector<int> &subset,vector<vector<int>> &answer,vector<int> &nums)
    {
        //baseconditions
        if(i==nums.size())
        {
            answer.push_back(subset);
            return;
        }
        
        //taking the ith element
        subset.push_back(nums[i]);
        helper(i+1,subset,answer,nums);
        
        //backtrack
        subset.pop_back();
        
        //not taking the ith element
        while(i+1 < nums.size() && nums[i] == nums[i+1]) i++;
        helper(i+1,subset,answer,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        
        helper(0,subset,answer,nums);
        return answer;
    }
};
