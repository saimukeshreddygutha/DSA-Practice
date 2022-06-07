class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0;i < n;i++){
            unordered_set<int> r, c;
            for(int j = 0;j < n;j++){r.insert(matrix[i][j]);c.insert(matrix[j][i]);}
            if(r.size() != n || c.size() != n)return false;
        }
        return true;
    }
};
