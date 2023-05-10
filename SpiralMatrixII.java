class Solution {
    public int[][] generateMatrix(int n) {
        
        int d = 0, top = 0, bottom = n - 1, left = 0, right = n - 1;

        int[][] mat = new int[n][n];
        int start = 1;
        while(left <= right && top <= bottom){
            switch(d){
                case 0:
                    for(int i = left;i <= right;i++)mat[top][i] = start++;
                    top++;
                    break;
                case 1: 
                    for(int i = top;i <= bottom;i++)mat[i][right] = start++;
                    right--;
                    break;
                case 2:
                    for(int i = right; i >= left;i--)mat[bottom][i] = start++;
                    bottom--;
                    break;
                case 3:
                    for(int i = bottom; i >= top;i--)mat[i][left] = start++;
                    left++;
                    break;
            }

            d = (d + 1) % 4;
        }

        return mat;
    }

}
