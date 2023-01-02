class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        
        int i = 0;
        
        int m = mat.size();
        int n = mat[0].size();
        int j = n-1;
        while(i < m && j >= 0){
            if(mat[i][j] == t)return true;

            if(mat[i][j] < t)i++;
            else j--;
        }

        return false;
    }
};
