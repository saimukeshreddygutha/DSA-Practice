class Solution {
public:
    void sortAndPlace(vector<vector<int>> &mat, int r, int c, int m, int n){
        vector<int> toSort;
        int nr = r, nc = c;
        while(r < m && c < n){
            toSort.push_back(mat[r][c]);
            r++;
            c++;
        }
        
        sort(toSort.begin(), toSort.end());
        int i = 0;
        while(nr < m && nc < n)mat[nr++][nc++] = toSort[i++];
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        for(int col = 0;col < n;col++){
            sortAndPlace(mat, 0, col, m, n);
        }
        
        for(int row = 1;row < m;row++){
            sortAndPlace(mat, row, 0, m, n);
            
        }
        return mat;
    }
};


/*

00 01 02 03
10 11 12 13
20 21 22 23



*/
