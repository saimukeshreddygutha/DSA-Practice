class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int len = nums.size();
        
        vector < vector<int> > ans;
        ans.push_back({});
        
        for(int i = 1; i < (1<<len);i++){
            vector<int> r;
            for(int j = 0; j < len;j++){
                if(i&(1<<j))
                    r.push_back(nums[j]);
            }
            ans.push_back(r);
        }
        
        return ans;
    }
};