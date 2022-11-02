class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& candidates, int target, int curSum, vector<int> curList, int idx){
        
        if(target < curSum)return;
        if(target == curSum){ans.push_back(curList);return;}
        int n = candidates.size();
        if(idx >= n)return;
        for(int i = idx;i < n;i++){
            
            curList.push_back(candidates[i]);
            helper(candidates, target, curSum + candidates[i], curList, i);
            curList.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        
        helper(candidates, target, 0, {}, 0);
        return ans;
    }
};
