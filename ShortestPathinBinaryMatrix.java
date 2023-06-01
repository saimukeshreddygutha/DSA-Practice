class Solution {
  public int shortestPathBinaryMatrix(int[][] grid) {
    if (grid[0][0] == 1) return -1;

    int[][] moves = new int[][] {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};
    int n = grid.length;
    boolean[][] seen = new boolean[n][n];
    ArrayDeque<int[]> queue = new ArrayDeque<int[]>();
    queue.offer(new int[] {0, 0});

    for (int cnt = 1; !queue.isEmpty(); cnt++) {
      for (int i = queue.size(); i > 0; i--) {
        int[] cell = queue.poll();

        if (cell[0] == n-1 && cell[1] == n-1)
          return cnt;

        for (int[] move : moves) {
          int x = cell[0] + move[0];
          int y = cell[1] + move[1];

          if (x >= 0 && x < n && y >= 0 && y < n && !seen[x][y] && grid[x][y] == 0) {
            seen[x][y] = true;
            queue.offer(new int[] {x, y});
          }
        }
      }
    }
    return -1;
  }
}
