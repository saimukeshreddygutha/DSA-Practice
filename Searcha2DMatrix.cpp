class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int nrows = matrix.length;
        int ncols = matrix[0].length;
        
        int l = 0, h = nrows - 1, nthrow=0;
        
        while(l <= h){
            int m = (l + h)/2;
            if(matrix[m][0] == target)
                return true;
            else if(matrix[m][0] > target){
                h = m -1;
            }
            else{
                nthrow = m;
                l = m + 1;
            }
        }
        
        l = 0;
        h = ncols - 1;
        
        while(l <= h){
            int m = (l+h)/2;
            if(matrix[nthrow][m] == target)
                return true;
            else if(matrix[nthrow][m] > target){
                h = m - 1;
            }
            else
                l = m + 1;
        }
        
        return false;
    }
}
