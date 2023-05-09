class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        
        List<Integer> ans = new ArrayList<Integer>();

        int m = matrix.length;
        int n = matrix[0].length;
        int top = 0, bottom = m - 1, left = 0, right = n - 1, d = 0;

        while(top <= bottom && left <= right){
            
            switch(d){
                case 0:
                    for(int i = left;i <= right;i++)
                        ans.add(matrix[top][i]);
                    top++;
                    break;
                case 1:
                    for(int i = top;i <= bottom;i++)
                        ans.add(matrix[i][right]);
                    right--;
                    break;
                case 2:
                    for(int i = right;i >= left;i--)
                        ans.add(matrix[bottom][i]);
                    bottom--;
                    break;
                case 3:
                    for(int i = bottom; i >= top;i--)
                        ans.add(matrix[i][left]);
                    left++;
                    break;
            }
            d = (d+1)%4;
        }

        return ans;
    }
}
