class Solution {
    public int diagonalSum(int[][] mat) {
        
        int n = mat.length;
        int res = 0;
        for(int i = 0;i < n;i++){
            res += mat[i][i];

            if(n-i-1 != i)
            res += mat[n-i-1][i];
        }

        return res;

    }
}
