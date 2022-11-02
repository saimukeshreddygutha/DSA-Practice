class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int> curCom, int idx, int n, int k){
        if(curCom.size() == k){ans.push_back(curCom);return;}
        
        for(int i = idx;i <= n;i++){
            curCom.push_back(i);
            helper(curCom, i + 1, n, k);
            curCom.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        ans.clear();
        helper({}, 1, n, k);
        return ans;
    }
};
