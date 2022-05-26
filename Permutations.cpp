class Solution {
public:
    vector<vector<int>> ans;
    void permutations(vector<int> nums, bool taken[], int ind, vector<int> row){
        int n = nums.size();
        if(ind == n){
            ans.push_back(row);
            return;
        }
        
        for(int i = 0;i < n;i++){
            if(!taken[i]){
                row[ind] = nums[i];
                taken[i] = true;
                permutations(nums, taken, ind + 1, row);
                taken[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        bool taken[n + 1];
        fill(taken, taken + n + 1, false);
        vector<int> row(n, 0);
        permutations(nums, taken, 0, row);
        return ans;
    }
};
