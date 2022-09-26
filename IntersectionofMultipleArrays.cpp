class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> m;
        int r = nums.size();
        for(int i = 0;i < r;i++){
            int c = nums[i].size();
            for(int j = 0;j < c;j++)m[nums[i][j]]++;
        }
        vector<int> ans;
        for(int i = 1;i < 1001;i++){
            if(m[i] == r)ans.push_back(i);
        }
        
        return ans;
    }
};
