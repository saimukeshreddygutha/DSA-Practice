class Solution {
    public void setZeroes(int[][] matrix) {
       HashSet<Integer> rowSet = new HashSet<Integer>();
       HashSet<Integer> colSet = new HashSet<Integer>();

       int m = matrix.length;
       int n = matrix[0].length;


       for(int i = 0;i < m;i++){
           for(int j = 0;j < n;j++){
               if(matrix[i][j] == 0){
                   rowSet.add(i);
                   colSet.add(j);
               }
           }
       }

        for(Integer rowNo: rowSet){
            for(int i = 0;i < n;i++)matrix[rowNo][i] = 0;
        }

        for(Integer colNo: colSet){
            for(int i = 0;i < m;i++)matrix[i][colNo] = 0;
        }

        return;
    }
}
