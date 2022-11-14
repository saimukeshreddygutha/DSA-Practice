class Solution {
public:
    void dfs(vector<vector<int>> &stones, vector<bool> &vi, int idx, int n){
        vi[idx] = true;
        for(int i = 0;i < n;i++){
            if(!vi[i] && (stones[idx][0] == stones[i][0] || stones[idx][1] == stones[i][1]))dfs(stones, vi, i, n);
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        
        int n = stones.size();
        int ans = 0;
        vector<bool> vi(n, false);
        for(int i = 0;i < n;i++){
            if(!vi[i]){
                ans++;
                dfs(stones, vi, i, n);
            }
        }
        return n-ans;
    }
};
