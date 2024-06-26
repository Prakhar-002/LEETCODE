//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 2812 

class Solution {
      private int[] rows = { 0, 0, -1, 1 };
      private int[] cols = { -1, 1, 0, 0 };

      private void bfs(List<List<Integer>> grid, int[][] score, int n) {
            Queue<int[]> q = new LinkedList<>();

            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < n; j++) {
                        if (grid.get(i).get(j) == 1) {
                              // If found thieve then score will be 0
                              score[i][j] = 0;
                              // Add and array of pos of thieve
                              // Offer just like add it return true of false
                              q.offer(new int[] { i, j });
                        }
                  }
            }

            // Now we collect all the thieves pos

            while (!q.isEmpty()) {
                  // returns and removes the element at the front
                  int[] lastThieve = q.poll();
                  int x = lastThieve[0], y = lastThieve[1];
                  int scoreValue = score[x][y];

                  for (int i = 0; i < 4; i++) {
                        int newX = x + rows[i];
                        int newY = y + cols[i];

                        if (Math.min(newX, newY) >= 0
                                    && Math.max(newX, newY) < n
                                    && score[newX][newY] > 1 + scoreValue) {
                              score[newX][newY] = 1 + scoreValue;
                              q.offer(new int[] { newX, newY });
                        }
                  }
            }
      }

      public int maximumSafenessFactor(List<List<Integer>> grid) {
            int n = grid.size();
            // Return 0 if start or end with thieve
            if (grid.get(0).get(0) == 1 || grid.get(n - 1).get(n - 1) == 1) {
                  return 0;
            }

            // Make a score 2d array to store the detail of thieves
            int[][] score = new int[n][n];
            for (int[] row : score) {
                  // Assign with max value
                  Arrays.fill(row, Integer.MAX_VALUE);
            }
            bfs(grid, score, n);

            boolean[][] vis = new boolean[n][n];
            PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> b[0] - a[0]);
            pq.offer(new int[] { score[0][0], 0, 0 });

            while (!pq.isEmpty()) {
                  int[] temp = pq.poll();
                  int safe = temp[0];
                  int i = temp[1], j = temp[2];

                  if (i == n - 1 && j == n - 1) {
                        return safe;
                  }
                  vis[i][j] = true;

                  for (int k = 0; k < 4; k++) {
                        int newX = i + rows[k];
                        int newY = j + cols[k];

                        if (Math.min(newX, newY) >= 0
                                    && Math.max(newX, newY) < n
                                    && !vis[newX][newY]) {
                              int s = Math.min(safe, score[newX][newY]);
                              pq.offer(new int[] { s, newX, newY });
                              vis[newX][newY] = true;
                        }
                  }
            }

            return -1;
      }
}